#!/bin/sh

set -ex

g++ -o ./build/abc154_c -Wall -O2 -std=c++14 ./abc154_c.cpp

./build/abc154_c <<EOF
1 2 3
foo
EOF
