#!/bin/sh

set -ex

g++ -o ./build/abc155_d -Wall -O2 -std=c++14 ./abc155_d.cpp

./build/abc155_d <<EOF
1 2 3
foo
EOF
