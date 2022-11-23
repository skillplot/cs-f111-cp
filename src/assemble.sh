#!/bin/bash

function __assemble__() {
  local LSCRIPTS=$( cd "$( dirname "${BASH_SOURCE[0]}")" && pwd )

  rm -r ${LSCRIPTS}/build &>/dev/null
  mkdir -p ${LSCRIPTS}/build
  gcc -S $1.c -lm -o ${LSCRIPTS}/build/$1.s
}

__assemble__ "$@"
