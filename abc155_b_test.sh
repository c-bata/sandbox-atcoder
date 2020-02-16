#!/bin/sh

set -ex

g++ -o ./build/abc155_b -Wall -O2 -std=c++14 ./abc155_b.cpp

./build/abc155_b <<EOF
1 2 3
foo
EOF
