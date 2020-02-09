#!/bin/sh

set -ex

g++ -o ./build/abc154_d -Wall -O2 -std=c++14 ./abc154_d.cpp

./build/abc154_d <<EOF
1 2 3
foo
EOF
