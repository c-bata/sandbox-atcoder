#!/bin/sh

set -ex

g++ -o ./build/abc152_a -Wall -O2 -std=c++14 ./abc152_a.cpp

./build/abc152_a <<EOF
3 3
EOF

./build/abc152_a <<EOF
3 2
EOF

./build/abc152_a <<EOF
1 1
EOF
