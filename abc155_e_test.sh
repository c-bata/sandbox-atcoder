#!/bin/sh

set -ex

g++ -o ./build/abc155_e -Wall -O2 -std=c++14 ./abc155_e.cpp

./build/abc155_e <<EOF
36
EOF

./build/abc155_e <<EOF
91
EOF

./build/abc155_e <<EOF
314159265358979323846264338327950288419716939937551058209749445923078164062862089986280348253421170
EOF
