//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package inet.routing.PARRoT;

import inet.routing.contract.IManetRouting;

simple PARRoT like IManetRouting
{
    parameters:
        @display("i=block/routing");
        @class(PARRoT);
	
		// Modules
        string interfaceTableModule;   // The path to the InterfaceTable module
        string routingTableModule;
        string networkProtocolModule = default("^.ipv4.ip");
        
        // Routing
        int maxHops = default(32);
        double neighborReliabilityTimeout @unit(s) = default(2s);
        bool rescheduleRoutesOnTimeout = default(true);
        bool useOHRepair = default(false);
        double mhChirpInterval @unit(s) = default(1s);
        
        // Reinforcement Learning
        double qFctAlpha = default(0.3);
        double qFctGamma = default(0.2);
        string combinationMethod = default("M");
        
        // Mobility Prediction
        int historySize = default(5);
        string predictionMethod = default("slope");        
        bool advancedMobility = default(false);
        double rangeOffset = default(0.0);
                
        // Basic Configureation
        string netmask = default("255.255.0.0");  // netmask for the ad-hoc network
        double maxJitter = default(0.1); // This is the maximum of a random value to determine when the first hello message will be sent out 
        volatile double broadcastDelay @unit(s) = default(uniform(0s,0.01s));

        
    gates:
        input ipIn;
        output ipOut;
        input lowerlayerIn;
        output lowerlayerOut;
}

