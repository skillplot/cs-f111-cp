#!/bin/bash

function __build__() {
  local LSCRIPTS=$( cd "$( dirname "${BASH_SOURCE[0]}")" && pwd )

  rm -r ${LSCRIPTS}/build &>/dev/null
  mkdir -p ${LSCRIPTS}/build
  local f
  local filename
  local filepath
  declare -a filepaths=($(ls -1 ${LSCRIPTS}/*.c))
  for f in "${filepaths[@]}"; do
    filename=$(basename ${f})
    filename=${filename%.*}
    filepath=${LSCRIPTS}/build/${filename}.out

    echo "gcc ${f} -lm -o ${filepath}"
    gcc ${f} -lm -o ${filepath}
  done
}

__build__ "$@"


