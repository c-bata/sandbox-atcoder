#!/bin/sh

set -ex

g++ -o ./build/abc138_c -Wall -O2 -std=c++14 ./abc138_c.cpp

./build/abc138_c <<EOF
3
1
4
3
EOF

./build/abc138_c <<EOF
2
5
5
EOF
