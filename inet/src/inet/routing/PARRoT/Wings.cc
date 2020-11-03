/*
 * Wings.cc
 *
 *  Created on: Mar 25, 2020
 *      Author: cedrik
 */

#include "PARRoT.h"
#include "inet/mobility/single/ExtendedBonnMotionMobility.h"
#include <fstream>

#define steeringVectorAvailable false
#define WP_REACHED_RANGE 10.0

namespace inet {

void PARRoT::trackPosition(Coord pos) {
	hist_coord_t.push_back(simTime().dbl());
	hist_coord.push_back(pos);
	if (hist_coord.size() > historySize) {
		hist_coord_t.pop_front();
		hist_coord.pop_front();
	}
}

Coord PARRoT::forecastPosition() {
	if (hist_coord.size() == 0) {
		// Not enough previous points for forecast available
		return Coord::NIL;
	}
	else {
		// Fit slope
		if (predictionMethod == "slope") {
			double mx = 0.0;
			double my = 0.0;
			double mz = 0.0;
			for (int i = 1; i < historySize; i++) {
				mx += (hist_coord[i].getX() - hist_coord[i - 1].getX())
				        / (mhChirpInterval);
				my += (hist_coord[i].getY() - hist_coord[i - 1].getY())
				        / (mhChirpInterval);
				mz += (hist_coord[i].getZ() - hist_coord[i - 1].getZ())
				        / (mhChirpInterval);
			}
			mx /= (historySize - 1);
			my /= (historySize - 1);
			mz /= (historySize - 1);

			// Forecast
			Coord p = hist_coord[historySize - 1];

			return Coord(
			        (mx * neighborReliabilityTimeout
			                + p.getX()),
			        (my  * neighborReliabilityTimeout
			                + p.getY()),
			        (mz  * neighborReliabilityTimeout
			                + p.getZ()));
		}else if(predictionMethod == "waypoint"){
			// Fit
			if (neighborReliabilityTimeout <= 0){
				return hist_coord[historySize - 1];
			}
	        double m_updateInterval_ms = mhChirpInterval*1000;
	        double _currentTime_ms = hist_coord_t[historySize - 1] * 1000;
	        std::deque<Coord> predictedData;
	        std::deque<Coord> historyData = hist_coord;
	        ExtendedBonnMotionMobility *mob = check_and_cast<ExtendedBonnMotionMobility*>(mobility);
			std::deque<Coord> plannedWaypoints = mob->gcWP(5);	 // Try to get some Waypoints
	        double v_mpMs = mob->getMaxSpeed()/1000;
	        if(hist_coord.size() > 0){
	        	int time_ms = (int)floor(_currentTime_ms/m_updateInterval_ms)*m_updateInterval_ms;

				Coord lastValidData = hist_coord[historySize - 1];
				Coord currentData = lastValidData;
				for (int i=0; i < (int)floor(neighborReliabilityTimeout/mhChirpInterval); i++){
	                time_ms += m_updateInterval_ms;
					if (steeringVectorAvailable){
						throw;
					}else if(plannedWaypoints.size() > 0){
						currentData = predictWithTarget(currentData, m_updateInterval_ms, plannedWaypoints[0]);
						if ((plannedWaypoints[0] - currentData).length() <= WP_REACHED_RANGE){
							plannedWaypoints.pop_front();
						}
					}else{
						currentData = predictWithHistory(historyData, hist_coord_t,time_ms);
					}
					predictedData.push_back(currentData);
					historyData.push_back(currentData);
					historyData.pop_front();
				}

				return predictedData[predictedData.size() - 1];
	        }else{
	        	return Coord::NIL;
	        }
		}else{
			// This method gets the exact position from trace files (resp. the most accurate interpolation between the two current points)
			// Might throw an error if ExtendedBonnMotionMobility is not used!
			ExtendedBonnMotionMobility *mob = check_and_cast<ExtendedBonnMotionMobility*>(mobility);
			Coord fut = mob->getFuturePosition(neighborReliabilityTimeout, simTime());
			return fut;
		}
	}
}

Coord PARRoT::predictWithTarget(Coord _currentData, int m_updateInterval_ms, Coord wp0)
{
    Coord nextData = _currentData;

    // compute the next position
    Coord position = _currentData;
    Coord target = wp0;
    ExtendedBonnMotionMobility *mob = check_and_cast<ExtendedBonnMotionMobility*>(mobility);
    double m_maxSpeed_mpMs = mob->getMaxSpeed()/1000;
    nextData = position + (target-position)/((target - position).length()) * (m_updateInterval_ms) * m_maxSpeed_mpMs;

    return nextData;

}

Coord PARRoT::predictWithHistory(std::deque<Coord> _historyData, std::deque<double> times, int _nextTime_ms)
{
    std::deque<Coord> historyData = _historyData;
    if(historyData.size()==1)
    {
        Coord nextData = historyData.at(historyData.size()-1);
        return nextData;
    }
    else
    {
        Coord lastValidData = _historyData.at(historyData.size()-1);

        // compute the position increment
        Coord positionIncrement;
        float totalWeight = 0;
        for(int unsigned i=1; i<_historyData.size(); i++)
        {
            Coord currentData = _historyData.at(i);
            Coord lastData = _historyData.at(i-1);

            float weight = 1;
            Coord increment = (currentData-lastData) * weight/(times.at(i)-times.at(i-1));	// going to seconds here!

            positionIncrement += increment;
            totalWeight += weight;

        }
        positionIncrement = positionIncrement/totalWeight;



        //
        Coord nextData = lastValidData + positionIncrement * (_nextTime_ms/1000-times.at(historyData.size()-1));
        return nextData;
    }
}


}	// namespace inet

