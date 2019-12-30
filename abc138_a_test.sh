#!/bin/sh

set -ex

g++ -o ./build/abc138_a -Wall -O2 -std=c++14 ./abc138_a.cpp

./build/abc138_a <<EOF
4
EOF

./build/abc138_a <<EOF
15
EOF

./build/abc138_a <<EOF
80
EOF
