#!/bin/sh

set -ex

g++ -o ./build/abc156_a -Wall -O2 -std=c++14 ./abc156_a.cpp

./build/abc156_a <<EOF
2 2919
EOF

./build/abc156_a <<EOF
22 3051
EOF
