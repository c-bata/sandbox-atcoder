#!/bin/sh

set -ex

g++ -o ./build/abc151_a -Wall -O2 -std=c++14 ./abc151_a.cpp

./build/abc151_a <<EOF
a
EOF

./build/abc151_a <<EOF
y
EOF
