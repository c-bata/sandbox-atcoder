#!/bin/sh

set -ex

g++ -o ./build/abc153_a -Wall -O2 -std=c++14 ./abc153_a.cpp

./build/abc153_a <<EOF
10 4
EOF

./build/abc153_a <<EOF
1 10000
EOF

./build/abc153_a <<EOF
10000 1
EOF
