#!/bin/bash

function __tests__.run() {
  local filepath=${1}
  local filename=$(basename ${filepath})
  filename=${filename%.*}
  (>&2 echo -e "filename: ${filename}")

  gcc ${filepath} -lm -o ${LSCRIPTS}/build/${filename}.out
  # ls -ltr ${LSCRIPTS}/build/${filename}.out
  local i
  IFS=$'\n';
  [[ -f ${LSCRIPTS}/build/${filename}.out ]] && {

    [[ -f ${LSCRIPTS}/tests/${filename}.txt ]] && {
      # ls -ltr ${LSCRIPTS}/tests/${filename}.txt
      for i in $(cat "${LSCRIPTS}/tests/${filename}.txt"); do
        (>&2 echo -e "Inputs: ${i}")
        echo "${i}" | "${LSCRIPTS}/build/${filename}.out"
        (>&2 echo -e "---")
      done
    } || {
      # ls -ltr ${LSCRIPTS}/build/${filename}.out
      ${LSCRIPTS}/build/${filename}.out
    }

  } || {
    echo "file does note exists: ${LSCRIPTS}/build/${filename}.out with filename: ${filename}"
  }
  (>&2 echo -e "----------------------")
}


function __tests__.main() {
  local LSCRIPTS=$( cd "$( dirname "${BASH_SOURCE[0]}")" && pwd )
  ## rm -r ${LSCRIPTS}/build &>/dev/null
  mkdir -p ${LSCRIPTS}/build

  local f
  for f in $(ls -1 ${LSCRIPTS}/*.c); do
    __tests__.run "${f}";
  done

}

__tests__.main "$@"
