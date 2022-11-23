#!/bin/bash

function __run__() {
  local LSCRIPTS=$( cd "$( dirname "${BASH_SOURCE[0]}")" && pwd )

  rm -r ${LSCRIPTS}/build &>/dev/null
  mkdir -p ${LSCRIPTS}/build
  gcc $1.c -lm -o ${LSCRIPTS}/build/$1.out
  ./${LSCRIPTS}/build/$1.out
}

__run__ "$@"

