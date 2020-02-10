#!/bin/sh

set -ex

g++ -o ./build/abc154_c -Wall -O2 -std=c++14 ./abc154_c.cpp

./build/abc154_c <<EOF
5
2 6 1 4 5
EOF

./build/abc154_c <<EOF
6
4 1 3 1 6 2
EOF

./build/abc154_c <<EOF
2
10000000 10000000
EOF
