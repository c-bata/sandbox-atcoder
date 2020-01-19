#!/bin/sh

set -ex

g++ -o ./build/abc152_b -Wall -O2 -std=c++14 ./abc152_b.cpp

./build/abc152_b <<EOF
1 2 3
foo
EOF
