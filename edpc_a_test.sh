#!/bin/sh

set -ex

g++ -o ./build/edpc_a -Wall -O2 -std=c++14 ./edpc_a.cpp

./build/edpc_a <<EOF
4
10 30 40 20
EOF

./build/edpc_a <<EOF
2
10 10
EOF

./build/edpc_a <<EOF
6
30 10 60 10 60 50
EOF
