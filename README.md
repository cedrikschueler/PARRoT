![# PARRoT](gfx/logo.png?raw=true)

This repository contains the simulation model for the novel **PARRoT** routing protocol.

The simulation has been tested with [*OMNeT++*](https://github.com/omnetpp/omnetpp/) v5.6.1 and [*INETMANET*](https://github.com/aarizaq/inetmanet-4.x) framework v4.x.
This repository holds the additional files for **PARRoT**, that can be easily integrated into *INETMANET* structure. 
Just copy the corresponding folders.

Alternatively, you can pull *INETMANET* and integrate **PARRoT** using *git* as follows:

```
# Execute in OMNeT++ Workspace:
-------------------------------
#! /bin/bash

# Remove inet content
rm -rf inet/

# Pull latest INETMANET version
git clone git@github.com:aarizaq/inetmanet-4.x.git inet

# Remove git content, so this folder isn't a submodule anymore
rm -rf inet/.git

# Reset this repository, which re-pulls the inet content and merges it to the existing folder
git reset --hard
```