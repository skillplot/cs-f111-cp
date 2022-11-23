#!/bin/bash

function __assemble__() {

  rm -r build &>/dev/null
  mkdir -p build
  gcc -S $1.c -lm -o build/$1.s
}

__assemble__ "$@"

