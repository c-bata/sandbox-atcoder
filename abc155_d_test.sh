#!/bin/sh

set -ex

g++ -o ./build/abc155_d -Wall -O2 -std=c++14 ./abc155_d.cpp

./build/abc155_d <<EOF
4 3
3 3 -4 -2
EOF

./build/abc155_d <<EOF
10 40
5 4 3 2 -1 0 0 0 0 0
EOF
