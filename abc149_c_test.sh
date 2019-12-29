#!/bin/sh

set -ex

g++ -o ./build/abc149_c -Wall -O2 -std=c++14 ./abc149_c.cpp

./build/abc149_c <<EOF
20
EOF

./build/abc149_c <<EOF
2
EOF

./build/abc149_c <<EOF
99992
EOF
