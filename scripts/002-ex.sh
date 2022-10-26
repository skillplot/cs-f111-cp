#!/bin/bash

## pattern matching using grep command
grep "this" data/002-ex-demo.txt
grep -i "this" data/002-ex-demo.txt
grep -v "this" data/002-ex-demo.txt
grep -c "this" data/002-ex-demo.txt
grep -o "this" data/002-ex-demo.txt


## chaining commands using pip '|'
ls -ltr | grep data/*.txt
ls -l | grep *.md


wc -l  grep data/*.txt > blah.txt 
wc -l  grep data/*.txt > blah-$(date -d now +'%d%m%y_%H%M%S').txt
who -u > data/userdtls-$(date -d now +'%d%m%y_%H%M%S').txt

wc -l < 002-ex.sh
##  error
# wc -l < *.sh

wc -l 002-ex.sh
wc -l *.sh


##  list of users who are currently logged into the system
who -u

##  print out all the uncommented lines of the file given that commented lines begin with a “#”
cat data/002-ex-demo-1.txt | grep -v '^#'

## Total occurrences of the word “this” in all the files using a single command
cat data/*.txt | grep -c 'this'
cat data/*.txt | grep -i 'this' | wc -l

cat data/*.txt | grep -ic 'this'

## Total number of lines that do not match the word “this”
cat data/*.txt | grep -vic 'this'

## Total number of lines in all 'txt' files
cat data/*.txt | wc -l

## how only the matched string 'this' in demo.txt along with the line number
cat data/*.txt | grep -ion 'this'

## all the lines in demo.txt which start with 'a' and end with 's'.
cat 002-ex-demo-1.txt | grep -i '^a.*s$'

## https://www.shellhacks.com/regex-find-email-addresses-file-grep/
grep -E -o "\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,6}\b" data/002-ex-demo-1.txt

## Print out all the lines that contain the word 'this' but do not contain the word 'and'. 
cat data/002-ex-demo-1.txt | grep -iv 'and' | grep 'this'

## The command `ifconfig` will give you the network configuration of your system. We want to find out whether `docker` is present.
## Using ifconfig write a command to find the presence of docker.
ifconfig | grep -i docker

### data/file-1-$(date -d now +'%d%m%y_%H%M%S').txt  data/file-2-$(date -d now +'%d%m%y_%H%M%S').txt  data/file-3-$(date -d now +'%d%m%y_%H%M%S').txt 
### touch data/file-{0001..0003}.txt
### touch data/file-{1..3}-$(date -d now +'%d%m%y_%H%M%S').txt
# touch data/file-{1..3}.txt
# touch data/file-{3..1}.txt
