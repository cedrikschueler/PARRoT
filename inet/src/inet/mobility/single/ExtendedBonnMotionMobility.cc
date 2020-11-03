//
// Copyright (C) 2005 Andras Varga
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#include "inet/common/INETMath.h"
#include "inet/mobility/single/ExtendedBonnMotionFileCache.h"
#include "inet/mobility/single/ExtendedBonnMotionMobility.h"
#include <fstream>

namespace inet {

Define_Module(ExtendedBonnMotionMobility);

ExtendedBonnMotionMobility::ExtendedBonnMotionMobility()
{
    is3D = false;
    lines = nullptr;
    dist_lines = nullptr;
    wp_lines = nullptr;
    currentLine = -1;
    maxSpeed = 0;
}

void ExtendedBonnMotionMobility::computeMaxSpeed()
{
    const ExtendedBonnMotionFile::Line& vec = *lines;
    double lastTime = vec[0];
    Coord lastPos(vec[1],vec[2],(is3D ? vec[3] : 0));
    unsigned int step = (is3D ? 4: 3);
    for (unsigned int i = step; i < vec.size(); i += step)
    {
        double elapsedTime = vec[i] - lastTime;
        Coord currPos(vec[i+1], vec[i+2], (is3D ? vec[i+3] : 0));
        double distance = currPos.distance(lastPos);
        double speed = distance / elapsedTime;
        if (speed > maxSpeed)
            maxSpeed = speed;
        lastPos.x = currPos.x;
        lastPos.y = currPos.y;
        lastPos.z = currPos.z;
        lastTime = vec[i];
    }
}

ExtendedBonnMotionMobility::~ExtendedBonnMotionMobility()
{
    ExtendedBonnMotionFileCache::deleteInstance();
}

void ExtendedBonnMotionMobility::initialize(int stage)
{
    LineSegmentsMobilityBase::initialize(stage);

    EV_TRACE << "initializing ExtendedBonnMotionMobility stage " << stage << endl;
    if (stage == INITSTAGE_LOCAL) {
        is3D = par("is3D");
        samplingInterval = par("samplingInterval");
        applyDistortion = par("applyDistortion");
        wpProvided = par("wpProvided");
        int nodeId = par("nodeId");
        if (nodeId == -1)
            nodeId = getContainingNode(this)->getIndex();
        const char *fname = par("traceFile");
        if(applyDistortion){
            const char *dname = par("distFile");
            const DistortionFile *dsFile = DistortionFileCache::getInstance()->getFile(dname);
            dist_lines = dsFile->getLine(nodeId);
        }
        if(wpProvided){
			const char *dname = par("wpFile");
			const WaypointFile *wpFile = WaypointFileCache::getInstance()->getFile(dname);
			wp_lines = wpFile->getLine(nodeId);
		}
        const ExtendedBonnMotionFile *bmFile = ExtendedBonnMotionFileCache::getInstance()->getFile(fname);
        lines = bmFile->getLine(nodeId);
        if (!lines or (applyDistortion && !dist_lines) or (wpProvided && !wp_lines))
            throw cRuntimeError("Invalid nodeId %d -- no such line in file '%s'", nodeId, fname);
        currentLine = 0;
        currentDistortionTime = 0;
        currentWPTime = 0;
        computeMaxSpeed();

        updateWP();
    }
}

void ExtendedBonnMotionMobility::setInitialPosition()
{
    const ExtendedBonnMotionFile::Line& vec = *lines;
    if (lines->size() >= 3) {
        lastPosition.x = vec[1];
        lastPosition.y = vec[2];
    }
    if(applyDistortion){
		const DistortionFile::Line& dist_vec = *dist_lines;
		if (dist_lines->size() >= 3) {
			currentDistortion.x = dist_vec[1];
			currentDistortion.y = dist_vec[2];
			currentDistortion.z = is3D ? dist_vec[3] : 0;
		}
    }
}

void ExtendedBonnMotionMobility::setTargetPosition()
{
    const ExtendedBonnMotionFile::Line& vec = *lines;
    if (currentLine + (is3D ? 3 : 2) >= (int)vec.size()) {
        nextChange = -1;
        stationary = true;
        targetPosition = lastPosition;
        return;
    }
    nextChange = vec[currentLine];
    targetPosition.x = vec[currentLine + 1];
    targetPosition.y = vec[currentLine + 2];
    targetPosition.z = is3D ? vec[currentLine + 3] : 0;
    currentLine += (is3D ? 4 : 3);
//
//    if(applyDistortion){
//		const DistortionFile::Line& dist_vec = *dist_lines;
//
//		currentDistortion.x = dist_vec[currentLine + 1];
//		currentDistortion.y = dist_vec[currentLine + 2];
//		currentDistortion.z = is3D ? dist_vec[currentLine + 3] : 0;
//    }
}

void ExtendedBonnMotionMobility::updateWP(){
    if(wpProvided){
		const WaypointFile::Line& wp_vec = *wp_lines;
		if(wp_vec.size() == 0){
			// Empty line, no waypoints provided
			return;
		}
		Coord latestWP = Coord(wp_vec[currentWPTime + 1], wp_vec[currentWPTime + 2], is3D ? wp_vec[currentWPTime + 3] : 0);
		waypoints.insert(std::make_pair(wp_vec[currentWPTime], latestWP));
		while(currentWPTime < wp_vec.size() - 4){
			currentWPTime += (is3D ? 4:3);
			Coord tmp;
			double t = wp_vec[currentWPTime];
			tmp.x = wp_vec[currentWPTime + 1];
			tmp.y = wp_vec[currentWPTime + 2];
			tmp.z = is3D ? wp_vec[currentWPTime + 3] : 0;

			if(tmp != latestWP){
				latestWP = tmp;
				waypoints.insert(std::make_pair(t, latestWP));
				wp_changes.push_back(t);
			}
		}

    }
}

std::deque<Coord> ExtendedBonnMotionMobility::gcWP(int n){
	std::deque<Coord> e;
	if(wpProvided){
		std::map<double, Coord>::iterator wp_it = waypoints.begin();
		if(waypoints.size() == 0){
			return e;
		}
		wp_it++;
		if(wp_it != waypoints.end() && wp_it->first <= simTime().dbl()){
			waypoints.erase(waypoints.begin());
		}
		wp_it = waypoints.begin();
		for (int i = 0; i < n;i++){
			if(wp_it == waypoints.end()){
				break;
			}
			e.push_back(wp_it->second);
			wp_it++;
		}
		return e;
	}else{
		return e;
	}
}

void ExtendedBonnMotionMobility::updateDistortion(int t1){
    if(applyDistortion){
		const DistortionFile::Line& dist_vec = *dist_lines;
		int t = dist_vec[currentDistortionTime];
		if(t >= t1){
			return;
		}else{
			int dT = t1 - t;
			currentDistortionTime += (is3D ? 4:3)*dT; 	// Really?
			currentDistortion.x = dist_vec[currentDistortionTime + 1];
			currentDistortion.y = dist_vec[currentDistortionTime + 2];
			currentDistortion.z = is3D ? dist_vec[currentDistortionTime + 3] : 0;
			currentDistortionTime += (is3D ? 4:3);
		}
    }
}

Coord ExtendedBonnMotionMobility::getFuturePosition(double lookAhead, simtime_t t){
    const ExtendedBonnMotionFile::Line& vec = *lines;
    Coord pos;

    double requestedTime = lookAhead + t.dbl();
    int steps = lookAhead/samplingInterval;
    int l = currentLine;

    int i = 0;
    while(vec[l] < requestedTime){
    	l += (is3D ? 4 : 3);
    	i++;
    }
    Coord p0, p1;
	p0.x = vec[currentLine + (i-1)*(is3D ? 4 : 3) + 1];
	p0.y = vec[currentLine + (i-1)*(is3D ? 4 : 3) + 2];
	p0.z = is3D ? vec[currentLine + (i-1)*(is3D ? 4 : 3) + 3] : 0;

    double tt = vec[currentLine + i*(is3D ? 4 : 3)] - vec[currentLine + (i-1)*(is3D ? 4 : 3)];
	p1.x = vec[currentLine + i*(is3D ? 4 : 3) + 1];
	p1.y = vec[currentLine + i*(is3D ? 4 : 3) + 2];
	p1.z = is3D ? vec[currentLine + i*(is3D ? 4 : 3) + 3] : 0;

	pos = p0 + (p1 - p0)/tt * (requestedTime - vec[currentLine + (i-1)*(is3D ? 4 : 3)]);

	return pos;
}

void ExtendedBonnMotionMobility::move()
{
    LineSegmentsMobilityBase::move();
    raiseErrorIfOutside();
}

Coord& ExtendedBonnMotionMobility::getCurrentRealPosition(){
	Coord p = LineSegmentsMobilityBase::getCurrentPosition();
	if(applyDistortion){
		updateDistortion((int)simTime().dbl());
		distortedPosition = p + currentDistortion;
	}else{

		distortedPosition = p;
	}
	return distortedPosition;
}


} // namespace inet

