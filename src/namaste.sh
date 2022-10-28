#!/bin/bash

rm -r build
mkdir -p build
gcc 0001_namaste.c -o build/0001_namaste.out
./build/0001_namaste.out

