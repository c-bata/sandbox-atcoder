#!/bin/sh

set -ex

g++ -o ./build/abc156_c -Wall -O2 -std=c++14 ./abc156_c.cpp

./build/abc156_c <<EOF
2
1 4
EOF

./build/abc156_c <<EOF
7
14 14 2 13 56 2 37
EOF
