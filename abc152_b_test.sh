#!/bin/sh

set -ex

g++ -o ./build/abc152_b -Wall -O2 -std=c++14 ./abc152_b.cpp

./build/abc152_b <<EOF
4 3
EOF

./build/abc152_b <<EOF
7 7
EOF

./build/abc152_b <<EOF
3 5
EOF

./build/abc152_b <<EOF
1 0
EOF
