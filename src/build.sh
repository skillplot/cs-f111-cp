#!/bin/bash

function __build__() {
  rm -r build &>/dev/null
  mkdir -p build
  local f
  declare -a files=($(ls -1 *.c))
  for f in "${files[@]}"; do
    local filename=${f%.*}
    # echo "filename: ${filename}"
    echo "gcc ${f} -lm -o build/${filename}.out"
    gcc ${f} -lm -o build/${filename}.out
  done
}

__build__ "$@"


