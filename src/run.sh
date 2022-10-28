#!/bin/bash

function __run__() {

  rm -r build &>/dev/null
  mkdir -p build
  gcc $1.c -lm -o build/$1.out
  ./build/$1.out
}

__run__ "$@"

