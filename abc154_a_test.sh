#!/bin/sh

set -ex

g++ -o ./build/abc154_a -Wall -O2 -std=c++14 ./abc154_a.cpp

./build/abc154_a <<EOF
1 2 3
foo
EOF
