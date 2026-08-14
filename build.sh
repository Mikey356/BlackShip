#!/bin/bash

includes="-I3rdParty -I3rdParty/Include"
libs="-luser32 -lwinmm -lopengl32 -L3rdParty/Libs -lraylibdll"
clang++ $includes -g Source/Main.cpp -oBlackShip.exe $libs 