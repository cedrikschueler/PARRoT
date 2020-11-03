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

#ifndef __INET_WaypointFILECACHE_H
#define __INET_WaypointFILECACHE_H

#include <list>
#include <vector>

#include "inet/common/INETDefs.h"

namespace inet {

class WaypointFileCache;

/**
 * Represents a Waypoint file's contents.
 * @see WaypointFileCache, WaypointMobility
 */
class INET_API WaypointFile
{
  public:
    typedef std::vector<double> Line;

  protected:
    friend class WaypointFileCache;
    typedef std::list<Line> LineList;
    LineList lines;

  public:
    const Line *getLine(int nodeId) const;
};

/**
 * Singleton object to read and store Waypoint files. Used within
 * WaypointMobility.  Needed because otherwise every node would
 * have to open and read the file independently.
 *
 * @ingroup mobility
 * @author Andras Varga
 */
class INET_API WaypointFileCache
{
  protected:
    typedef std::map<std::string, WaypointFile> BmFileMap;
    BmFileMap cache;
    static WaypointFileCache *inst;
    void parseFile(const char *filename, WaypointFile& bmFile);
    WaypointFileCache() {}
    virtual ~WaypointFileCache() {}

  public:
    /**
     * Returns the singleton instance.
     */
    static WaypointFileCache *getInstance();

    /**
     * Deletes the singleton instance.
     */
    static void deleteInstance();

    /**
     * Returns the given document.
     */
    virtual const WaypointFile *getFile(const char *filename);
};

} // namespace inet

#endif // ifndef __INET_WaypointFILECACHE_H

