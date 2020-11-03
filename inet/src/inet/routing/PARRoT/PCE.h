/*
 * PCE.h
 *
 *  Created on: Apr 6, 2020
 *      Author: cedrik
 */

#pragma once

namespace inet {
class PCE {
	public:
		PCE(Ipv4Address destination) {
			destination = destination;
		}
		~PCE() {
		}

		void lastSeen(double v) {
			_lastSeen = v;
		}
		void Q(double v) {
			_qValue = v;
		}
		void V(double v) {
			_rValue = v;
		}
		void squNr(unsigned int v) {
			_squNr = v;
		}
		Ipv4Address getDestination() {
			return destination;
		}
		double lastSeen() {
			return _lastSeen;
		}
		double Q() {
			return _qValue;
		}
		double V() {
			return _rValue;
		}
		unsigned int squNr() {
			return _squNr;
		}

	protected:
		Ipv4Address destination;
		double _lastSeen;
		double _qValue;
		double _rValue;
		unsigned int _squNr;

};

} // namespace inet
