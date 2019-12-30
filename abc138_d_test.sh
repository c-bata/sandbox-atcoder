#!/bin/sh

set -ex

g++ -o ./build/abc138_d -Wall -O2 -std=c++14 ./abc138_d.cpp

./build/abc138_d <<EOF
3
1 0 0
EOF

./build/abc138_d <<EOF
10
1 0 0 1 1 1 0 0 1 1
EOF

./build/abc138_d <<EOF
5
0 0 0 0 0
EOF
