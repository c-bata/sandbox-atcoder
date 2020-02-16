#!/bin/sh

set -ex

g++ -o ./build/abc155_b -Wall -O2 -std=c++14 ./abc155_b.cpp

./build/abc155_b <<EOF
5
6 7 9 10 31
EOF

./build/abc155_b <<EOF
3
28 27 24
EOF
