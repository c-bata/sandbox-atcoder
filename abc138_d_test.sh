#!/bin/sh

set -ex

g++ -o ./build/abc138_d -Wall -O2 -std=c++14 ./abc138_d.cpp

./build/abc138_d <<EOF
1 2 3
foo
EOF
