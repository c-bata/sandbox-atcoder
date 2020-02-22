#!/bin/sh

set -ex

g++ -o ./build/abc156_b -Wall -O2 -std=c++14 ./abc156_b.cpp

./build/abc156_b <<EOF
11 2
EOF

./build/abc156_b <<EOF
1010101 10
EOF

./build/abc156_b <<EOF
314159265 3
EOF
