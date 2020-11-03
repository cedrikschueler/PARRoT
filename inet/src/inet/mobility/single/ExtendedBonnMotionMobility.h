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

#ifndef __INET_ExtendedBonnMotionMOBILITY_H
#define __INET_ExtendedBonnMotionMOBILITY_H

#include "inet/common/INETDefs.h"
#include "inet/mobility/base/LineSegmentsMobilityBase.h"
#include "inet/mobility/single/ExtendedBonnMotionFileCache.h"
#include "inet/mobility/single/DistortionFileCache.h"
#include "inet/mobility/single/WaypointFileCache.h"
#include <deque>

namespace inet {

/**
 * @brief Uses the ExtendedBonnMotion native file format. See NED file for more info.
 *
 * @ingroup mobility
 * @author Andras Varga
 */
class INET_API ExtendedBonnMotionMobility : public LineSegmentsMobilityBase
{
  protected:
    // state
    bool is3D;
    const ExtendedBonnMotionFile::Line *lines;
    const DistortionFile::Line *dist_lines;
    const WaypointFile::Line *wp_lines;
    int currentLine;
    int currentDistortionTime;
    int currentWPTime;
    std::map<double, Coord> waypoints;
    std::deque<double> wp_changes;
    double samplingInterval;
    double maxSpeed; // the possible maximum speed at any future time
    Coord currentDistortion;
    Coord distortedPosition;
    Coord currentWaypoint;
    bool applyDistortion;
    bool wpProvided;
    void updateWP();


  protected:
    void updateDistortion(int t1);

    virtual int numInitStages() const override { return NUM_INIT_STAGES; }

    /** @brief Initializes mobility model parameters. */
    virtual void initialize(int stage) override;

    /** @brief Initializes the position according to the mobility model. */
    virtual void setInitialPosition() override;

    /** @brief Overridden from LineSegmentsMobilityBase. */
    virtual void setTargetPosition() override;

    /** @brief Overridden from LineSegmentsMobilityBase. */
    virtual void move() override;

    virtual void computeMaxSpeed();

  public:
    ExtendedBonnMotionMobility();

    virtual ~ExtendedBonnMotionMobility();

    virtual double getMaxSpeed() const override { return maxSpeed; }

    virtual Coord& getCurrentRealPosition();

    Coord getFuturePosition(double lookAhead, simtime_t t);

    std::deque<Coord> gcWP(int n);

};

} // namespace inet

#endif // ifndef __INET_ExtendedBonnMotionMOBILITY_H

