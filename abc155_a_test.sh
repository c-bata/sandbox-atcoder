#!/bin/sh

set -ex

g++ -o ./build/abc155_a -Wall -O2 -std=c++14 ./abc155_a.cpp

./build/abc155_a <<EOF
1 2 3
foo
EOF
