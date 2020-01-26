#!/bin/sh

set -ex

g++ -o ./build/abc153_b -Wall -O2 -std=c++14 ./abc153_b.cpp

./build/abc153_b <<EOF
1 2 3
foo
EOF
