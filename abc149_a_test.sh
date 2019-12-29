#!/bin/sh

set -ex

g++ -o ./build/abc149_a -Wall -O2 -std=c++14 ./abc149_a.cpp

./build/abc149_a <<EOF
oder atc
EOF

./build/abc149_a <<EOF
humu humu
EOF
