#!/bin/sh

set -ex

g++ -o ./build/abc153_c -Wall -O2 -std=c++14 ./abc153_c.cpp

./build/abc153_c <<EOF
3 1
4 1 5
EOF

./build/abc153_c <<EOF
8 9
7 9 3 2 3 8 4 6
EOF

./build/abc153_c <<EOF
3 0
1000000000 1000000000 1000000000
EOF
