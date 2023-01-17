#!/bin/bash

function __tests__.run() {
  local filepath=${1}
  local _filename=$(basename ${filepath})
  filename=${_filename%.*}
  (>&2 echo -e "src filepath: ${filepath}")
  (>&2 echo -e "src filename: ${filename}")
  (>&2 echo -e "testcase: ${LSCRIPTS}/tests/${filename}.txt")
  (>&2 echo -e "output executable: ${LSCRIPTS}/build/${filename}.out")

  gcc ${filepath} -lm -o ${LSCRIPTS}/build/${filename}.out
  # ls -ltr ${LSCRIPTS}/build/${filename}.out
  local i
  IFS=$'\n';
  [[ -f ${LSCRIPTS}/build/${filename}.out ]] && {

    [[ -f ${LSCRIPTS}/tests/${filename}.txt ]] && {
      # ls -ltr ${LSCRIPTS}/tests/${filename}.txt
      for i in $(cat "${LSCRIPTS}/tests/${filename}.txt"); do
        (>&2 echo -e "Inputs: ${i}")
        # echo "${i}" | "${LSCRIPTS}/build/${filename}.out"
        # echo "${i}" | "${LSCRIPTS}/build/${filename}.out" 1>>${log_basepath}/${filename}.log 2>&1
        echo "${i}" | "${LSCRIPTS}/build/${filename}.out" | tee -a ${log_basepath}/${filename}.log 2>&1
        (>&2 echo -e "---")
      done
    } || {
      # ls -ltr ${LSCRIPTS}/build/${filename}.out
      # ${LSCRIPTS}/build/${filename}.out
      ${LSCRIPTS}/build/${filename}.out 2>&1 | tee -a ${log_basepath}/${filename}.log
    }

  } || {
    echo "file does note exists: ${LSCRIPTS}/build/${filename}.out with _filename: ${_filename}"
  }
  (>&2 echo -e "----------------------")
}


function __tests__.main() {
  local LSCRIPTS=$( cd "$( dirname "${BASH_SOURCE[0]}")" && pwd )
  local log_basepath="${LSCRIPTS}/logs/$(date -d now +'%d%m%y_%H%M%S')"
  ## rm -r ${LSCRIPTS}/build &>/dev/null
  # rm -r ${LSCRIPTS}/logs &>/dev/null

  mkdir -p ${LSCRIPTS}/build
  mkdir -p ${log_basepath}

  local f
  for f in $(ls -1 ${LSCRIPTS}/*.c); do
    __tests__.run "${f}";
  done

}

__tests__.main "$@"
