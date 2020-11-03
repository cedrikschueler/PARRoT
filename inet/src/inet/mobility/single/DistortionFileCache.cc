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

#include <fstream>
#include <sstream>

#include "inet/mobility/single/DistortionFileCache.h"

namespace inet {

const DistortionFile::Line *DistortionFile::getLine(int nodeId) const
{
    LineList::const_iterator it = lines.begin();
    for (int i = 0; i < nodeId && it != lines.end(); i++)
        it++;
    return (it == lines.end()) ? nullptr : &(*it);
}

DistortionFileCache *DistortionFileCache::inst;

DistortionFileCache *DistortionFileCache::getInstance()
{
    if (!inst)
        inst = new DistortionFileCache;
    return inst;
}

void DistortionFileCache::deleteInstance()
{
    if (inst) {
        delete inst;
        inst = nullptr;
    }
}

const DistortionFile *DistortionFileCache::getFile(const char *filename)
{
    // if found, return it from cache
    auto it = cache.find(std::string(filename));
    if (it != cache.end())
        return &(it->second);

    // load and store in cache
    DistortionFile& bmFile = cache[filename];
    parseFile(filename, bmFile);
    return &bmFile;
}

void DistortionFileCache::parseFile(const char *filename, DistortionFile& bmFile)
{
    std::ifstream in(filename, std::ios::in);
    if (in.fail())
        throw cRuntimeError("Cannot open file '%s'", filename);

    std::string line;
    while (std::getline(in, line)) {
        bmFile.lines.push_back(DistortionFile::Line());
        DistortionFile::Line& vec = bmFile.lines.back();

        std::stringstream linestream(line);
        double d;
        while (linestream >> d)
            vec.push_back(d);
    }
    in.close();
}

} // namespace inet

