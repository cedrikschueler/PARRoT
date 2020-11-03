/***************************************************************************
* author:      Andreas Kuntz
*
* copyright:   (c) 2009 Institute of Telematics, University of Karlsruhe (TH)
*
* author:      Alfonso Ariza
*              Malaga university
*
*              This program is free software; you can redistribute it
*              and/or modify it under the terms of the GNU General Public
*              License as published by the Free Software Foundation; either
*              version 2 of the License, or (at your option) any later
*              version.
*              For further information see file COPYING
*              in the top level directory
***************************************************************************/

#include "inet/physicallayer/pathloss/EmpiricNakagamiFading.h"
#include <fstream>
#include <sstream>
namespace inet {

namespace physicallayer {

Define_Module(EmpiricNakagamiFading);

EmpiricNakagamiFading::EmpiricNakagamiFading()
{
}

void EmpiricNakagamiFading::initialize(int stage)
{
    FreeSpacePathLoss::initialize(stage);
    if (stage == INITSTAGE_LOCAL) {
        const char *fname = par("pathlossFile");
        std::string filename(fname);
        std::fstream r;
        char cstr[256];
        r.open(filename.c_str(), std::ios::in);
        if(r.is_open()){
        	while(r.getline(cstr, sizeof(cstr))){
        		std::string str(cstr);
        		size_t pos = 0;
        		std::string delimiter = ",";
        		while((pos = str.find(delimiter)) != std::string::npos){
        			str.erase(0, pos + delimiter.length());
        			values.push_back(std::stod(str));

        		}

        	}
        }else{
        	throw;
        }

        r.close();
    }
}

std::ostream& EmpiricNakagamiFading::printToStream(std::ostream& stream, int level) const
{
    stream << "EmpiricNakagamiFading";
    return stream;
}

double EmpiricNakagamiFading::computePathLoss(mps propagationSpeed, Hz frequency, m distance) const
{
	double scalar;
    if (distance.get() == 0.0){
    	scalar = 0.0;
    }else{
    	int ind = int(floor(distance.get()*10)/10/0.1) - 1;
    	if (ind >= values.size()){
    		scalar = 0.0;
    	}else{
    		scalar =  values[ind];
    	}
    }
    m waveLength = propagationSpeed / frequency;
    double freeSpacePathLoss = computeFreeSpacePathLoss(waveLength, distance, alpha, systemLoss);
    double res = freeSpacePathLoss*pow(10, scalar/10);
    return res;
}



} // namespace physicallayer

} // namespace inet

