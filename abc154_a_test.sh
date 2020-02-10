#!/bin/sh

set -ex

g++ -o ./build/abc154_a -Wall -O2 -std=c++14 ./abc154_a.cpp

./build/abc154_a <<EOF
red blue
3 4
red
EOF

./build/abc154_a <<EOF
red blue
5 5
blue
EOF
