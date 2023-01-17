#!/bin/bash

function __run_tests__.main() {
  local LSCRIPTS=$( cd "$( dirname "${BASH_SOURCE[0]}")" && pwd )

  # rm -r ${LSCRIPTS}/logs &>/dev/null
  mkdir -p ${LSCRIPTS}/logs
  bash ${LSCRIPTS}/tests.sh 1>${LSCRIPTS}/logs/tests-$(date -d now +'%d%m%y_%H%M%S').log 2>&1
}

__run_tests__.main "$@"
