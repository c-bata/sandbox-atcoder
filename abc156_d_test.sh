#!/bin/sh

set -ex

g++ -o ./build/abc156_d -Wall -O2 -std=c++14 ./abc156_d.cpp

./build/abc156_d <<EOF
4 1 3
EOF

./build/abc156_d <<EOF
5 1 3
EOF

#./build/abc156_d <<EOF
#1000000000 141421 173205
#EOF
