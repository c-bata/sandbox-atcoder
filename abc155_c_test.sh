#!/bin/sh

set -ex

g++ -o ./build/abc155_c -Wall -O2 -std=c++14 ./abc155_c.cpp

./build/abc155_c <<EOF
7
beat
vet
beet
bed
vet
bet
beet
EOF

./build/abc155_c <<EOF
8
buffalo
buffalo
buffalo
buffalo
buffalo
buffalo
buffalo
buffalo
EOF

./build/abc155_c <<EOF
7
bass
bass
kick
kick
bass
kick
kick
EOF

./build/abc155_c <<EOF
4
ushi
tapu
nichia
kun
EOF
