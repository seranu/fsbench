#!/bin/bash
cd Build
export CC=/usr/bin/clang
export CXX=/usr/bin/clang++ 
cmake ..
make
cd ..
