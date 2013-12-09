#!/bin/bash

if [ -d build ] 
  then 
    rm -r build
fi

mkdir -p build
cd build
cmake -DCMAKE_CXX_COMPILER=/usr/bin/icpc -DCMAKE_C_COMPILER=/usr/bin/icc ..
make

