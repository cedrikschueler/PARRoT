/*
 * darpp.cc
 *
 *  Created on: Mar 25, 2020
 *      Author: cedrik
 */
#include "PARRoT.h"

namespace inet {

Define_Module(PARRoT);

//	Objects and initialisation
PARRoT::PARRoT() {
}

PARRoT::~PARRoT() {
}

void PARRoT::initialize(int stage) {

	RoutingProtocolBase::initialize(stage);

	if (stage == INITSTAGE_LOCAL) {
		m_squNr = 0;
		ift = getModuleFromPar<IInterfaceTable>(par("interfaceTableModule"),
		        this);
		rt = getModuleFromPar<IIpv4RoutingTable>(par("routingTableModule"),
		        this);
		networkProtocol = getModuleFromPar<INetfilter>(
		        par("networkProtocolModule"), this);
		mobility = check_and_cast<IMobility*>(
		        getContainingNode(this)->getSubmodule("mobility"));
		// Register logging unit
		auto tmp = this->getParentModule()->getParentModule()->getSubmodule(
		        "radioMedium");
		if (tmp) {
			radioMedium = check_and_cast<physicallayer::IRadioMedium*>(tmp);
		}else{
			throw;
		}
		// Routing
		mhChirpInterval = par("mhChirpInterval");
		maxHops = par("maxHops");
		neighborReliabilityTimeout = par("neighborReliabilityTimeout");
		rescheduleRoutesOnTimeout = par("rescheduleRoutesOnTimeout");
		useOHRepair = par("useOHRepair");

		// Reinforcement Learning
		qFctAlpha = par("qFctAlpha");
		qFctGamma = par("qFctGamma");
		combinationMethod = par("combinationMethod").stdstringValue();

		// Mobility Prediction
		historySize = par("historySize");
		predictionMethod = par("predictionMethod").stdstringValue();
		advancedMobility = par("advancedMobility");
		rangeOffset = par("rangeOffset");


		// Create reminder messages
		multiHopChirpReminder = new cMessage("multiHopChirpReminder");
		destinationReminder = new cMessage("destinationReminder");
	}
	else if (stage == INITSTAGE_ROUTING_PROTOCOLS) {
		registerService(Protocol::manet, nullptr, gate("ipIn"));
		registerProtocol(Protocol::manet, gate("ipOut"), nullptr);
	}
}

void PARRoT::start() {
	/* Search the 80211 interface */
	int num_80211 = 0;
	broadcastDelay = &par("broadcastDelay");
	InterfaceEntry *ie;
	InterfaceEntry *i_face;
	const char *name;
	for (int i = 0; i < ift->getNumInterfaces(); i++) {
		ie = ift->getInterface(i);
		name = ie->getInterfaceName();
		if (strstr(name, "wlan") != nullptr) {
			i_face = ie;
			num_80211++;
			interfaceId = i;
		}
	}

// One enabled network interface (in total)
	if (num_80211 == 1) {
		interface80211ptr = i_face;
	}
	else {
		throw cRuntimeError("Router has found %i 80211 interfaces", num_80211);
	}

	CHK(interface80211ptr->getProtocolData< Ipv4InterfaceData >())->joinMulticastGroup(
	        Ipv4Address::LL_MANET_ROUTERS);

	ieee80211::Ieee80211Mac *mac_ptr = nullptr;
	for (SubmoduleIterator it(interface80211ptr); !it.end(); ++it) {
		cModule *submodule = *it;
		if (dynamic_cast<ieee80211::Ieee80211Mac*>(submodule)) {
			mac_ptr = dynamic_cast<ieee80211::Ieee80211Mac*>(submodule);
		}
	}

	ieee80211::Dcf *dcf_ptr = nullptr;
	if (mac_ptr) {
		for (SubmoduleIterator it(mac_ptr); !it.end(); ++it) {
			cModule *submodule = *it;
			if (dynamic_cast<ieee80211::Dcf*>(submodule)) {
				dcf_ptr = dynamic_cast<ieee80211::Dcf*>(submodule);
			}
		}
	}
	if (dcf_ptr) {
		for (SubmoduleIterator it(dcf_ptr); !it.end(); ++it) {
			cModule *submodule = *it;
			if (dynamic_cast<ieee80211::Dcaf*>(submodule)) {
				dcaf_ptr = dynamic_cast<ieee80211::Dcaf*>(submodule);
			}
		}
	}

	m_selfIpv4Address =
	        interface80211ptr->getProtocolData<Ipv4InterfaceData>()->getIPAddress();

// Schedule update reminder
	scheduleAt(simTime() + uniform(0.0, par("maxJitter")), multiHopChirpReminder);

}

void PARRoT::stop() {

}
void PARRoT::finish() {
}

}	// namespace inet

