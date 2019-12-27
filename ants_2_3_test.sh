#!/bin/sh

set -ex

g++ -o ./build/ants_2_3 -Wall -O2 -std=c++14 ./ants_2_3.cpp

./build/ants_2_3 <<EOF
4 5
2 3
1 2
3 4
2 2
EOF
