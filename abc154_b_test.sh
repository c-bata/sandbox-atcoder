#!/bin/sh

set -ex

g++ -o ./build/abc154_b -Wall -O2 -std=c++14 ./abc154_b.cpp

./build/abc154_b <<EOF
1 2 3
foo
EOF
