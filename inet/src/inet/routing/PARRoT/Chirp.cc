/*
 * Chirp.cc
 *
 *  Created on: Mar 25, 2020
 *      Author: cedrik
 */

#include "PARRoT.h"
#include <fstream>
#include "inet/physicallayer/contract/packetlevel/SignalTag_m.h"

#define MAX_RSS_TRACE_SIZE 100

namespace inet {
// 	Incoming message management
void PARRoT::handleMessageWhenUp(cMessage *msg) {
	if (msg->isSelfMessage()) {
		handleSelfMessage(msg);
	}
	else if (check_and_cast<Packet*>(msg)->getTag<PacketProtocolTag>()->getProtocol()
	        == &Protocol::manet) {
		if (strcmp(msg->getName(), "multiHopChirp") == 0) {
			double receivedSignalStrength = 10*log10(1000*check_and_cast<Packet*>(msg)->getTag<SignalPowerInd>()->getPower().get());
			auto incomingMultiHop =
			        (staticPtrCast<MultiHopChirp>(
			                check_and_cast<Packet*>(msg)->peekData<MultiHopChirp>()->dupShared()));
			// todo: Only Chunk length (->getBitLength()) or whole packet? (->getTotalLength().get())
			int remainingHops = handleIncomingMultiHopChirp(
			        &(*incomingMultiHop),
			        check_and_cast<Packet*>(msg)->getBitLength(), receivedSignalStrength);
			if (remainingHops > 0
			        && postliminaryChecksPassed(incomingMultiHop->getOrigin(),
			                incomingMultiHop->getHop())) {

				// Set route value
				incomingMultiHop->setValue((float)
				        getMaxValueFor(incomingMultiHop->getOrigin()));

				// Set neighbor fallback information
				incomingMultiHop->setHop(m_selfIpv4Address);

				Coord forecast = forecastPosition();
				Coord p = (hist_coord.size() != 0) ? hist_coord[historySize - 1] : Coord::NIL;
				incomingMultiHop->setX((float)p.getX());
				incomingMultiHop->setY((float)p.getY());
				incomingMultiHop->setZ((float)p.getZ());

				Coord v_int = (forecast - p)/((neighborReliabilityTimeout != 0) ? neighborReliabilityTimeout : 1.0);
				incomingMultiHop->setVX((float)v_int.getX());
				incomingMultiHop->setVY((float)v_int.getY());
				incomingMultiHop->setVZ((float)v_int.getZ());

				incomingMultiHop->setGamma_mob((float)m_Gamma_Mob);

				// Update hop count
				incomingMultiHop->setHopCount(remainingHops);

				auto packet = new Packet("multiHopChirp", incomingMultiHop);
				packet->addTagIfAbsent<L3AddressReq>()->setDestAddress(
				        Ipv4Address(255, 255, 255, 255)); // let's try the limited broadcast 255.255.255.255 but
				                                          // multicast goes from 224.0.0.0 to 239.255.255.255
				packet->addTagIfAbsent<L3AddressReq>()->setSrcAddress(
				        m_selfIpv4Address); // let's try the limited broadcast
				packet->addTagIfAbsent<InterfaceReq>()->setInterfaceId(
				        interface80211ptr->getInterfaceId());
				packet->addTagIfAbsent<PacketProtocolTag>()->setProtocol(
				        &Protocol::manet);
				packet->addTagIfAbsent<DispatchProtocolReq>()->setProtocol(
				        &Protocol::ipv4);

				sendDelayed(packet, broadcastDelay->doubleValue(), "ipOut");
				packet = nullptr;
			}
			delete msg;
		}else if (strcmp(msg->getName(), "oneHopChirp") == 0){
			auto incomingOneHop =
			        (staticPtrCast<OneHopChirp>(
			                check_and_cast<Packet*>(msg)->peekData<OneHopChirp>()->dupShared()));
			// todo: Only Chunk length (->getBitLength()) or whole packet? (->getTotalLength().get())
			int remainingHops = handleIncomingOneHopChirp(
			        &(*incomingOneHop),
			        check_and_cast<Packet*>(msg)->getBitLength());
			delete msg;
		}else {
			delete msg;
		}
	}
	else {
		throw cRuntimeError("Message not supported %s", msg->getName());
	}
}

bool PARRoT::postliminaryChecksPassed(Ipv4Address origin, Ipv4Address gateway) {
	if (Vi.size() == 0) {
		// No neighbors
		return false;
	}
	else if (Vi.size() == 1) {
		// One neighbor, was this neighbor the sender/origin of the chirp?
		return !(Vi.begin()->first == origin || Vi.begin()->first == gateway);
	}
	else if (getNextHopFor(origin) != gateway){
		// Neighbor was not the best choice, no need to propagate this.
		return false;
	}
	else {
		return true;
	}
}

void PARRoT::handleSelfMessage(cMessage *msg) {
	if (msg == multiHopChirpReminder) {
		sendMultiHopChirp();
		scheduleAt(simTime() + mhChirpInterval + broadcastDelay->doubleValue(),
		        multiHopChirpReminder);
	}
	else if (msg == destinationReminder) {
		if(!destinationsToUpdate.empty()){
		Ipv4Address target = destinationsToUpdate.begin()->second;
		destinationsToUpdate.erase(destinationsToUpdate.begin());
		for (std::map<SimTime, Ipv4Address>::iterator it = destinationsToUpdate.begin(); it != destinationsToUpdate.end(); it++){
			if(it->second == target){
				destinationsToUpdate.erase(it);
			}
		}
		refreshRoutingTable(target);

		// Erase handled Event
		}
		// Schedule next event
		if(!destinationsToUpdate.empty()){
			if(destinationReminder->isScheduled()){
				cancelEvent(destinationReminder);
			}
			scheduleAt(destinationsToUpdate.begin()->first, destinationReminder);
		}
	}
	else {
		delete msg;
	}
}

void PARRoT::trackRSS(double rss, Coord p_j){
    Coord p_i;
    p_i = (hist_coord.size() != 0) ? hist_coord[historySize - 1] : Coord::NIL;

    double d = (p_j - p_i).length();

    if(!isnan(d) || d == 0){
        m_rssTrace.push_back(rss);
        m_distanceTrace.push_back(d);

        if(m_rssTrace.size() > MAX_RSS_TRACE_SIZE){
            m_rssTrace.erase(m_rssTrace.begin());
            m_distanceTrace.erase(m_distanceTrace.begin());
        }
        if(m_rssTrace.size() > 1){
            m_rss_min = *std::min_element(m_rssTrace.begin(), m_rssTrace.end());
            m_rss_max = *std::max_element(m_rssTrace.begin(), m_rssTrace.end());
            m_rss_mean = std::accumulate(m_rssTrace.begin(), m_rssTrace.end(), 0.0)/ (1.0 * m_rssTrace.size());
            double std_dev = 0.0;
            std::for_each(m_rssTrace.begin(), m_rssTrace.end(), [&std_dev, this](double &d) { std_dev += (d - m_rss_mean)*(d-m_rss_mean); });
            m_rss_std = std::sqrt(1/((double)m_rssTrace.size() - 1)*std_dev);

            m_d_min = *std::min_element(m_distanceTrace.begin(), m_distanceTrace.end());
            m_d_max = *std::max_element(m_distanceTrace.begin(), m_distanceTrace.end());
            m_d_mean = std::accumulate(m_distanceTrace.begin(), m_distanceTrace.end(), 0.0)/ (1.0 * m_distanceTrace.size());
            std_dev = 0.0;
            std::for_each(m_distanceTrace.begin(), m_distanceTrace.end(), [this, &std_dev](double &d) { std_dev += (d - m_d_mean)*(d-m_d_mean); });
            m_d_std = std::sqrt(1/((double)m_distanceTrace.size() - 1)*std_dev);
        }
    }
}

void PARRoT::updateGamma_Mob() {
	int exclusive = 0;
	int merged = 0;
	std::vector<Ipv4Address> currentSetOfNeighbors;
	for (std::map<Ipv4Address, PDC*>::iterator it = Vi.begin(); it != Vi.end();
	        it++) {
		if (simTime().dbl() - it->second->lastSeen()
		        <= neighborReliabilityTimeout) {
			currentSetOfNeighbors.push_back(it->first);
		}
	}

	for (std::vector<Ipv4Address>::iterator o = lastSetOfNeighbors.begin();
	        o != lastSetOfNeighbors.end(); o++) {
		if (std::find(currentSetOfNeighbors.begin(),
		        currentSetOfNeighbors.end(), (*o))
		        == currentSetOfNeighbors.end()) {
			// If entry is not in other vector, it is exclusive in first vector
			exclusive++;
		}
		// Every entry in first vector is a member of the union
		merged++;
	}
	for (std::vector<Ipv4Address>::iterator n = currentSetOfNeighbors.begin();
	        n != currentSetOfNeighbors.end(); n++) {
		if (std::find(lastSetOfNeighbors.begin(), lastSetOfNeighbors.end(),
		        (*n)) == lastSetOfNeighbors.end()) {
			// Only exclusive entries of second vector are considered to the merged counter, as all common entries have already been concerned in first iteration
			exclusive++;
			merged++;
		}
	}

	lastSetOfNeighbors = currentSetOfNeighbors;
	m_Gamma_Mob =
	        (merged != 0) ?
	                sqrt(
	                        1
	                                - static_cast<double>(exclusive)
	                                        / static_cast<double>(merged)) :
	                0.0;
}
//	Multi-Hop signalling (incoming)
int PARRoT::handleIncomingMultiHopChirp(MultiHopChirp *chirp, int64_t len, double rss) {
	Ipv4Address origin = chirp->getOrigin();
	Ipv4Address gateway = chirp->getHop();

	float val = chirp->getValue();

	float x = chirp->getX();
	float y = chirp->getY();
	float z = chirp->getZ();
	float vx = chirp->getVX();
	float vy = chirp->getVY();
	float vz = chirp->getVZ();

	float gamma_mob = chirp->getGamma_mob();
	unsigned short squNr = chirp->getSquNr();

	int hopCount = chirp->getHopCount();

	trackRSS(rss, Coord(x, y, z));

	if (origin == m_selfIpv4Address) {
		return 0;
	}

	std::map<Ipv4Address, PDC*>::iterator nj = Vi.find(gateway);
	// Ensure next hop is registered in neighbors
	if (nj != Vi.end() && origin != m_selfIpv4Address) {
		nj->second->lastSeen(simTime().dbl());
		nj->second->coord(x, y, z);
		nj->second->velo(vx, vy, vz);
		nj->second->Gamma_Mob(gamma_mob);
		nj->second->Gamma_Pos(Gamma_Pos(gateway));
	}
	else {
		PDC *data = new PDC();
		data->lastSeen(simTime().dbl());
		data->coord(x, y, z);
		data->velo(vx, vy, vz);
		data->Gamma_Mob(gamma_mob);
		Vi.insert(std::make_pair(gateway, data));
		data->Gamma_Pos(Gamma_Pos(gateway));
	}

	if (Gateways.find(origin) == Gateways.end()) {
		// Case 1: Origin was not captured as destination at all
		PCE *data = new PCE(origin);
		data->lastSeen(simTime().dbl());
		data->Q(0);
		data->squNr(squNr);
		data->V(val);
		std::map<Ipv4Address, PCE*> gw = { { gateway, data } };
		Gateways[origin] = gw;
		float qval = qFunction(origin, gateway);
		PCE *data_ = Gateways.at(origin).at(gateway);
	}
	else {
		// Case 2: Origin was captured as destination, but not via this hop
		std::map<Ipv4Address, std::map<Ipv4Address, PCE*>>::iterator gw =
		        Gateways.find(origin);
		if (gw->second.find(gateway) == gw->second.end()) {
			// Make new entry
			PCE *data = new PCE(origin);
			data->lastSeen(simTime().dbl());
			data->Q(0);
			data->squNr(squNr);
			data->V(val);
			gw->second[gateway] = data;
		}
		else {
			// Case 3: Origin was already captured as destination via this hop
			if (squNr > gw->second[gateway]->squNr()
			        || (squNr == gw->second[gateway]->squNr()
			                && val > gw->second[gateway]->V())) {
				gw->second[gateway]->squNr(squNr);
				gw->second[gateway]->lastSeen(simTime().dbl());
				gw->second[gateway]->V(val);
			}
			else {
				return 0;
			}
		}
	}
	return --hopCount;
}

void PARRoT::refreshRoutingTable(Ipv4Address origin) {
	// Purge
	rt->purge();
	purgeNeighbors();

	// Determine current route and bestRoute
	Ipv4Route *_route = rt->findBestMatchingRoute(origin);
	PARRoTRoute *route =
	        (_route) ? check_and_cast<PARRoTRoute*>(_route) : nullptr;
	Ipv4Address bestHop = getNextHopFor(origin);

	// Do nothing..
	if (!route && bestHop.isUnspecified()) {
		return;
	}
	else {
		if(route && route->getGateway() == bestHop){
			// Best route is already chosen, so don't change it
			return;
		}
		// Remove old route anyway
		if(route){
			rt->removeRoute(route);
		}
		if (bestHop.isUnspecified()) {
			// If bestHop is unspecified, we don't have a new route for this destination
			// Send alert here!
			if(useOHRepair){
				sendOneHopChirp(origin);
			}
		}
		else {
			// Add route to routing table
			PARRoTRoute *e = new PARRoTRoute();
			e->setDestination(origin);
			e->setNetmask(Ipv4Address::ALLONES_ADDRESS);
			e->setGateway(bestHop);
			e->setInterface(interface80211ptr);
			e->setSourceType(IRoute::MANET);
			e->setExpiryTime(simTime() + std::min(std::max(neighborReliabilityTimeout, mhChirpInterval), Gamma_Pos(bestHop, origin)));
			e->setMetric(1); // As only this route to destination is added, just add any number
			rt->addRoute(e);
		}
	}

}

void PARRoT::purgeNeighbors() {

	// First delete invalid entrys
	for (std::map<Ipv4Address, std::map<Ipv4Address, PCE*>>::iterator t =
	        Gateways.begin(); t != Gateways.end(); t++) {
		Ipv4Address target = t->first;
		for (std::map<Ipv4Address, PCE*>::iterator act =
		        Gateways.find(target)->second.begin();
		        act != Gateways.find(target)->second.end();) {
			double deltaT = simTime().dbl() - act->second->lastSeen();
			if (deltaT > std::min(std::max(neighborReliabilityTimeout, mhChirpInterval), Gamma_Pos(act->first))){
				delete act->second;
				act = Gateways.at(target).erase(act);
			}else{
			    act++;
			}
		}
	}

	// Check if neighbor is still usefull
	for (std::map<Ipv4Address, PDC*>::iterator n = Vi.begin(); n != Vi.end();) {
		bool useful = false;
		for (std::map<Ipv4Address, std::map<Ipv4Address, PCE*>>::iterator t =
		        Gateways.begin(); t != Gateways.end(); t++) {
			useful = useful || (t->second.find(n->first) != t->second.end());
		}
		if (!useful) {
			delete n->second;
			n = Vi.erase(n);
		}else{
		    n++;
		}
	}
}

void PARRoT::sendOneHopChirp(Ipv4Address destination) {
	auto chirp = makeShared<OneHopChirp>();
	// Set identification fields
	chirp->setOrigin(m_selfIpv4Address);
	chirp->setDestination(destination);

	int totalByteLength = sizeof(m_selfIpv4Address) * 2;
	chirp->setChunkLength(B(totalByteLength));
	// Creating and sending packet
	auto packet = new Packet("oneHopChirp", chirp);
	packet->addTagIfAbsent<L3AddressReq>()->setDestAddress(
	        Ipv4Address(255, 255, 255, 255));
	packet->addTagIfAbsent<L3AddressReq>()->setSrcAddress(m_selfIpv4Address);
	packet->addTagIfAbsent<InterfaceReq>()->setInterfaceId(
	        interface80211ptr->getInterfaceId());
	packet->addTagIfAbsent<PacketProtocolTag>()->setProtocol(&Protocol::manet);
	packet->addTagIfAbsent<DispatchProtocolReq>()->setProtocol(&Protocol::ipv4);
	sendDelayed(packet, broadcastDelay->doubleValue(), "ipOut");
	packet = nullptr;
	chirp = nullptr;
}

int PARRoT::handleIncomingOneHopChirp(OneHopChirp *chirp, int64_t len) {
	Ipv4Address hop = chirp->getOrigin();
	Ipv4Address destination = chirp->getDestination();

	// Determine current route and bestRoute
	Ipv4Route *_route = rt->findBestMatchingRoute(destination);
	PARRoTRoute *route =
	        (_route) ? check_and_cast<PARRoTRoute*>(_route) : nullptr;

	std::map<Ipv4Address, std::map<Ipv4Address, PCE*>>::iterator dstEntry = Gateways.find(destination);
	if (dstEntry != Gateways.end()){
		std::map<Ipv4Address, PCE*>::iterator hopEntry = dstEntry->second.find(hop);
		if(hopEntry != dstEntry->second.end()){
			hopEntry->second->Q(0);
			hopEntry->second->V(0);
		}
		if(route && route->getGateway() == hop){
			refreshRoutingTable(destination);
		}
	}
	return 0;
}

//	Multi-Hop signalling (outgoing)
void PARRoT::sendMultiHopChirp() {
    m_backoffCounter--;
    if(m_backoffCounter <= 0){
        checkEnvironment();
    }
	// Update all Q-Values and reset candidates
	for(std::map<Ipv4Address, std::map<Ipv4Address, PCE*>>::iterator it = Gateways.begin(); it != Gateways.end(); it++){
		for(std::map<Ipv4Address, PCE*>::iterator gw = it->second.begin(); gw != it->second.end(); gw++){
			PCE* data = gw->second;
			// Re-calculate stored Q-Value
			data->Q(qFunction(it->first, gw->first));
		}
		refreshRoutingTable(it->first);
	}
	auto chirp = makeShared<MultiHopChirp>();

	// Set identification fields
	chirp->setOrigin(m_selfIpv4Address);
	chirp->setHop(m_selfIpv4Address);
	chirp->setSquNr(m_squNr);
	m_squNr++;

	// Set fallback information
	Coord p;
	if(advancedMobility){
		p = check_and_cast<ExtendedBonnMotionMobility*>(mobility)->getCurrentRealPosition();
	}else{
		p = mobility->getCurrentPosition();
	}
	trackPosition(p);
	Coord forecast = forecastPosition();
	Coord v_int = (forecast - p)/((neighborReliabilityTimeout != 0) ? neighborReliabilityTimeout : 1.0);
	chirp->setX((float)p.getX());
	chirp->setY((float)p.getY());
	chirp->setZ((float)p.getZ());
	chirp->setVX((float)v_int.getX());
	chirp->setVY((float)v_int.getY());
	chirp->setVZ((float)v_int.getZ());

	updateGamma_Mob();
	chirp->setGamma_mob((float)m_Gamma_Mob);

	// Set value (initially to 1 respectively 100%)
	chirp->setValue(1.0);
	chirp->setHopCount(maxHops);

	int totalByteLength = sizeof(m_selfIpv4Address)
	        + sizeof(m_squNr)
	        + 6 * sizeof((float)p.getX())
	        + 2*sizeof((float)m_Gamma_Mob) + sizeof(maxHops);
	chirp->setChunkLength(B(totalByteLength));
	// Creating and sending packet
	auto packet = new Packet("multiHopChirp", chirp);
	packet->addTagIfAbsent<L3AddressReq>()->setDestAddress(
	        Ipv4Address(255, 255, 255, 255));
	packet->addTagIfAbsent<L3AddressReq>()->setSrcAddress(m_selfIpv4Address);
	packet->addTagIfAbsent<InterfaceReq>()->setInterfaceId(
	        interface80211ptr->getInterfaceId());
	packet->addTagIfAbsent<PacketProtocolTag>()->setProtocol(&Protocol::manet);
	packet->addTagIfAbsent<DispatchProtocolReq>()->setProtocol(&Protocol::ipv4);
	sendDelayed(packet, broadcastDelay->doubleValue(), "ipOut");
	packet = nullptr;
	chirp = nullptr;
}

}	// namespace inet
