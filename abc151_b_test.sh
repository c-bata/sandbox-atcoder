#!/bin/sh

set -ex

g++ -o ./build/abc151_b -Wall -O2 -std=c++14 ./abc151_b.cpp

./build/abc151_b <<EOF
5 10 7
8 10 3 6
EOF

./build/abc151_b <<EOF
5 10 5
10 10 5 0
EOF

./build/abc151_b <<EOF
4 100 60
100 100 100
EOF

./build/abc151_b <<EOF
4 100 60
0 0 0
EOF
