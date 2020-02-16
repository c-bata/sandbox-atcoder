#!/bin/sh

set -ex

g++ -o ./build/abc155_a -Wall -O2 -std=c++14 ./abc155_a.cpp

./build/abc155_a <<EOF
5 7 5
EOF

./build/abc155_a <<EOF
4 4 4
EOF

./build/abc155_a <<EOF
4 9 6
EOF

./build/abc155_a <<EOF
3 3 4
EOF
