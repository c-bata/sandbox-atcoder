#!/bin/sh

set -ex

g++ -o ./build/abc138_b -Wall -O2 -std=c++14 ./abc138_b.cpp

./build/abc138_b <<EOF
6 2
EOF

./build/abc138_b <<EOF
14 3
EOF

./build/abc138_b <<EOF
20 4
EOF
