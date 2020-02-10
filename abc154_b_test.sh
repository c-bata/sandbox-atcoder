#!/bin/sh

set -ex

g++ -o ./build/abc154_b -Wall -O2 -std=c++14 ./abc154_b.cpp

./build/abc154_b <<EOF
sardine
EOF

./build/abc154_b <<EOF
xxxx
EOF
