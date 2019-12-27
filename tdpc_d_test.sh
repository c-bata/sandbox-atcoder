#!/bin/sh

set -ex

g++ -o ./build/tdpc_d -Wall -O2 -std=c++14 ./tdpc_d.cpp

./build/tdpc_d <<EOF
2 6
EOF

./build/tdpc_d <<EOF
3 2
EOF
