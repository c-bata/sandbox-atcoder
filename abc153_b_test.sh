#!/bin/sh

set -ex

g++ -o ./build/abc153_b -Wall -O2 -std=c++14 ./abc153_b.cpp

./build/abc153_b <<EOF
10 3
4 5 6
EOF

./build/abc153_b <<EOF
20 3
4 5 6
EOF

./build/abc153_b <<EOF
210 5
31 41 59 26 53
EOF

./build/abc153_b <<EOF
211 5
31 41 59 26 53
EOF
