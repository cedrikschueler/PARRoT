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

#ifndef __INET_ExtendedBonnMotionFILECACHE_H
#define __INET_ExtendedBonnMotionFILECACHE_H

#include <list>
#include <vector>

#include "inet/common/INETDefs.h"

namespace inet {

class ExtendedBonnMotionFileCache;

/**
 * Represents a ExtendedBonnMotion file's contents.
 * @see ExtendedBonnMotionFileCache, ExtendedBonnMotionMobility
 */
class INET_API ExtendedBonnMotionFile
{
  public:
    typedef std::vector<double> Line;

  protected:
    friend class ExtendedBonnMotionFileCache;
    typedef std::list<Line> LineList;
    LineList lines;

  public:
    const Line *getLine(int nodeId) const;
};

/**
 * Singleton object to read and store ExtendedBonnMotion files. Used within
 * ExtendedBonnMotionMobility.  Needed because otherwise every node would
 * have to open and read the file independently.
 *
 * @ingroup mobility
 * @author Andras Varga
 */
class INET_API ExtendedBonnMotionFileCache
{
  protected:
    typedef std::map<std::string, ExtendedBonnMotionFile> BmFileMap;
    BmFileMap cache;
    static ExtendedBonnMotionFileCache *inst;
    void parseFile(const char *filename, ExtendedBonnMotionFile& bmFile);
    ExtendedBonnMotionFileCache() {}
    virtual ~ExtendedBonnMotionFileCache() {}

  public:
    /**
     * Returns the singleton instance.
     */
    static ExtendedBonnMotionFileCache *getInstance();

    /**
     * Deletes the singleton instance.
     */
    static void deleteInstance();

    /**
     * Returns the given document.
     */
    virtual const ExtendedBonnMotionFile *getFile(const char *filename);
};

} // namespace inet

#endif // ifndef __INET_ExtendedBonnMotionFILECACHE_H

