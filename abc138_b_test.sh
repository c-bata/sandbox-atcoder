#!/bin/sh

set -ex

g++ -o ./build/abc138_b -Wall -O2 -std=c++14 ./abc138_b.cpp

./build/abc138_b <<EOF
1 2 3
foo
EOF
