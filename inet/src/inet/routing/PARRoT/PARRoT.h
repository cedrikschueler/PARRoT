/*
 * 
 *
 *  Created on: Mar 25, 2020
 *      Author: cedrik
 *
 *      PARRoT - Predictive Ad-hoc Routing Fueled by Reinforcement Learning and Trajectory Knowledge
 */

#ifndef INET_ROUTING_PARRoT_PARRoT_H_
#define INET_ROUTING_PARRoT_PARRoT_H_

#include <iomanip>      // std::setprecision

#include "inet/common/geometry/common/Coord.h"
#include "inet/common/INETDefs.h"
#include "inet/common/IProtocolRegistrationListener.h"
#include "inet/common/packet/Packet.h"
#include "inet/common/ModuleAccess.h"
#include "inet/routing/base/RoutingProtocolBase.h"
#include "inet/networklayer/ipv4/IIpv4RoutingTable.h"
#include "inet/networklayer/contract/INetfilter.h"
#include "inet/networklayer/contract/IInterfaceTable.h"
#include "inet/networklayer/ipv4/Ipv4InterfaceData.h"
#include "inet/networklayer/common/L3Tools.h"
#include "inet/networklayer/common/NextHopAddressTag_m.h"
#include "inet/networklayer/common/L3AddressTag_m.h"
#include "inet/linklayer/common/InterfaceTag_m.h"
#include "inet/linklayer/ieee80211/mac/Ieee80211Mac.h"
#include "inet/physicallayer/contract/packetlevel/IRadioMedium.h"
#include "inet/mobility/single/ExtendedBonnMotionMobility.h"


#include "PDC.h"
#include "PCE.h"
#include "OneHopChirp_m.h"
#include "MultiHopChirp_m.h"

namespace inet {

class PARRoT: public RoutingProtocolBase {
	// PARRoT
	public:
		PARRoT();
		~PARRoT();
	protected:
		virtual int numInitStages() const override {
			return NUM_INIT_STAGES;
		}
		virtual void initialize(int stage) override;

		virtual void handleStartOperation(LifecycleOperation *operation)
		        override {
			start();
		}
		virtual void handleStopOperation(LifecycleOperation *operation)
		        override {
			stop();
		}
		virtual void handleCrashOperation(LifecycleOperation *operation)
		        override {
			stop();
		}

		void start();
		void stop();
		void finish() override;


		std::map<Ipv4Address, std::map<Ipv4Address, PCE*>> Gateways;
		std::map<Ipv4Address, PDC*> Vi;
		std::map<SimTime, Ipv4Address> destinationsToUpdate;

		// Pointer
		INetfilter *networkProtocol = nullptr;
		InterfaceEntry *interface80211ptr = nullptr;
		IInterfaceTable *ift = nullptr;
		IIpv4RoutingTable *rt = nullptr;
		physicallayer::IRadioMedium *radioMedium = nullptr;
		ieee80211::Dcaf *dcaf_ptr = nullptr;
		IMobility *mobility = nullptr;
		cPar *broadcastDelay = nullptr;
		cMessage *multiHopChirpReminder = nullptr;
		cMessage *destinationReminder = nullptr;

		// Own Identification
		int interfaceId = -1;
		Ipv4Address m_selfIpv4Address;
		unsigned short m_squNr = 0;

		// CA-PARRoT variables
		std::vector<double> m_rssTrace;
        std::vector<double> m_distanceTrace;
        double m_rss_min, m_rss_max, m_rss_mean, m_rss_std;
        double m_d_min, m_d_max, m_d_mean, m_d_std;
        std::string m_environment;
        int m_backoffCounter;
        int m_maxBackoff;

	// Routing
	protected:
		int handleIncomingMultiHopChirp(MultiHopChirp *msg, int64_t len, double rss);
		bool postliminaryChecksPassed(Ipv4Address origin, Ipv4Address gateway);
		void sendMultiHopChirp();
		void refreshRoutingTable(Ipv4Address origin);
		void purgeNeighbors();
		void sendOneHopChirp(Ipv4Address destination);
		int handleIncomingOneHopChirp(OneHopChirp *chirp, int64_t len);
		virtual void handleMessageWhenUp(cMessage *msg) override;
		virtual void handleSelfMessage(cMessage *msg);
		void trackRSS(double rss, Coord p_j);
		void checkEnvironment(std::string fallback="friis");

		double mhChirpInterval;
		unsigned short maxHops;
		double neighborReliabilityTimeout;
		bool rescheduleRoutesOnTimeout;
		bool useOHRepair;
		double rangeOffset;
	// Reinforcement Learning
	protected:
		double qFunction(Ipv4Address target, Ipv4Address hop);
		double R(Ipv4Address origin, Ipv4Address hop);
		double Gamma_Pos(Ipv4Address a, Ipv4Address origin = Ipv4Address("0.0.0.0"));
		double combineDiscounts(std::vector<double> gamma);
		double getMaxValueFor(Ipv4Address target);
		Ipv4Address getNextHopFor(Ipv4Address target);
		void updateGamma_Mob();

		double qFctAlpha;
		double qFctGamma;
		double qLambda;
		double qOmega;
		double m_Gamma_Mob;
		std::string combinationMethod;


	// Mobility Prediction
	protected:
        void trackPosition(Coord pos);
        Coord forecastPosition();
        Coord predictWithHistory(std::deque<Coord> _historyData, std::deque<double> times, int _nextTime_ms);
        Coord predictWithTarget(Coord _currentData, int m_updateInterval_ms, Coord wp0);

		bool advancedMobility;
		int historySize;
        std::deque<double> hist_coord_t;
        std::deque<Coord> hist_coord;
		std::vector<Ipv4Address> lastSetOfNeighbors;
		std::string predictionMethod;


};

class INET_API PARRoTRoute: public Ipv4Route {
		// Adaption based on DSDV implementation
		// Credits go to its authors!
	protected:
		unsigned int sequencenumber; // originated from destination. Ensures loop freeness.
		simtime_t expiryTime;  // time the routing entry is valid until

	public:
		virtual bool isValid() const override {
			return expiryTime == 0 || expiryTime > simTime();
		}

		simtime_t getExpiryTime() const {
			return expiryTime;
		}
		void setExpiryTime(simtime_t time) {
			expiryTime = time;
		}
		void setSequencenumber(int i) {
			sequencenumber = i;
		}
		unsigned int getSequencenumber() const {
			return sequencenumber;
		}
};
} // namespace inet

#endif /* INET_ROUTING_PARRoT_PARRoT_H_ */
