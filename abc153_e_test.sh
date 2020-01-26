#!/bin/sh

set -ex

g++ -o ./build/abc153_e -Wall -O2 -std=c++14 ./abc153_e.cpp

./build/abc153_e <<EOF
9 3
8 3
4 2
2 1
EOF

./build/abc153_e <<EOF
100 6
1 1
2 3
3 9
4 27
5 81
6 243
EOF

./build/abc153_e <<EOF
9999 10
540 7550
691 9680
700 9790
510 7150
415 5818
551 7712
587 8227
619 8671
588 8228
176 2461
EOF
