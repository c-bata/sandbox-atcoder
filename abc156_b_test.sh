#!/bin/sh

set -ex

g++ -o ./build/abc156_b -Wall -O2 -std=c++14 ./abc156_b.cpp

./build/abc156_b <<EOF
1 2 3
foo
EOF
