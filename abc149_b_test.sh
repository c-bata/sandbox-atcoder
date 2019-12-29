#!/bin/sh

set -ex

g++ -o ./build/abc149_b -Wall -O2 -std=c++14 ./abc149_b.cpp

./build/abc149_b <<EOF
2 3 3
EOF

./build/abc149_b <<EOF
500000000000 500000000000 1000000000000
EOF

./build/abc149_b <<EOF
500000000000 500000000000 999999999999
EOF
