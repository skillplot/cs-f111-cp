---
id: shell-script
title: Shell Scripting
description: Shell Scripting
---


* Scripting is an amazing method to avoid repetitive work and to bring in automation.
It happens many times, that we run certain codes repetitively inside the shell, so to make it easier and less boring, we can include multiple codes in a file and whenever required we can just execute the file and all commands in it will be executed simultaneously. It is same like creating functions in any program.
* The format of such file is ".sh"
* Always start a script file with **#!/bin/bash**

### Steps to create and run a script file-

```bash
   touch myscript.sh
```
* This will create a script file with the name myscript.sh

```bash
   nano myscript.sh
```
* This will open the file, and you can add codes in it to be run, or you can open the file in any other editor and edit the file.

```bash
   chmod +x myscript.sh
```
* This will make this file executable.

* Now you run the file in the terminal by the following code-
```bash
   ./myscript.sh
```
* You have successfully created and run a script file.
* To make a file global, so that the script could be run from anywhere without us being into its directory, this can be done by adding the file to the $PATH environment.
* We can create a symlink to the original file in the path file.
```bash
   ln -s original/path/myscript.sh /user/local/script.sh
```

* References
1. https://www.shellscript.sh/
2. https://www.freecodecamp.org/news/shell-scripting-crash-course-how-to-write-bash-scripts-in-linux/
3. https://medium.com/swlh/automating-tasks-with-shell-scripts-543422a12cd5
