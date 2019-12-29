#!/bin/sh

set -ex

g++ -o ./build/abc149_d -Wall -O2 -std=c++14 ./abc149_d.cpp

./build/abc149_d <<EOF
5 2
8 7 6
rsrpr1
EOF

./build/abc149_d <<EOF
7 1
100 10 1
ssssppr
EOF

./build/abc149_d <<EOF
30 5
325 234 123
rspsspspsrpspsppprpsprpssprpsr
EOF
