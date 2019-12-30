#!/bin/sh

set -ex

g++ -o ./build/abc138_c -Wall -O2 -std=c++14 ./abc138_c.cpp

./build/abc138_c <<EOF
1 2 3
foo
EOF
