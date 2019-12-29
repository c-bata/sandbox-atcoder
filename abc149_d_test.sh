#!/bin/sh

set -ex

g++ -o ./build/abc149_d -Wall -O2 -std=c++14 ./abc149_d.cpp

./build/abc149_d <<EOF
1 2 3
foo
EOF
