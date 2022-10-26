#!/bin/bash

## Copyright (c) 2021 mangalbhaskar. All Rights Reserved.
##__author__ = 'mangalbhaskar'
###----------------------------------------------------------
## sublime-text editor
###----------------------------------------------------------
#
## References:
## * http://ubuntuhandbook.org/index.php/2013/12/install-sublime-text-3-ubuntu-14-04-trusty
## Official Linux Repo setup
## * https://www.sublimetext.com/docs/3/linux_repositories.html
##----------------------------------------------------------


function sublime-apt-install.main() {
  #sudo add-apt-repository -y ppa:webupd8team/sublime-text-3
  #sudo -E apt-get update
  #sudo -E apt-get -q -y install sublime-text-installer

  wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -
  sudo apt -y install apt-transport-https
  ## Stable
  echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list
  ## Dev
  #echo "deb https://download.sublimetext.com/ apt/dev/" | sudo tee /etc/apt/sources.list.d/sublime-text.list
  sudo apt -y update
  sudo apt -y install sublime-text
}

sublime-apt-install.main "$@"
