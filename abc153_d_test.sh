#!/bin/sh

set -ex

g++ -o ./build/abc153_d -Wall -O2 -std=c++14 ./abc153_d.cpp

./build/abc153_d <<EOF
1 2 3
foo
EOF
