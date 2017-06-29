#!/bin/bash
if [ ! -d "build" ]; then
	mkdir build 
fi

cd build
export CC=/usr/bin/clang
export CXX=/usr/bin/clang++ 
cmake ..
make
cd ..
