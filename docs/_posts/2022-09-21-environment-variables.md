---
id: environment-variables
title: Environment Variables
description: Environment Variables
---


They are used to define the behavior of the environment and customize how the system works. They are dynamic values and are editable, provided from outside the application. 
They help programs know what directory to install files in, where to store temporary files, and where to find user profile settings.


## Conventions to be used while naming them

1. The names of the variables are case-sensitive and should be in UPPER CASE only.
2. There is no space around the equals "=" sign.
3. When assigning multiple values to the variable they must be separated by the colon `:` character.


## Basic Commands

1. To display the environment variables
    * `printenv`- printall the environment variables.
    * `set` - list of all variables including environment and shell variables.
    * `printenv HOME`- display the value of HOME environment variable.
    * echo $Var_Name
2. To create a new shell variable-
    `MY_VAR = 'LinuxSamit'`
    `echo $MY_VAR`- To print the defined shell variables.
3. To make a variable into environment variable -
    `export MY_VAR`
    * it will make the MY_VAR variable as environment variable.
4. Creating a new environment variable-
    `export NEW_VAR= 'A_NEW_VAR'`
5. To check whether a variable is environment variable or not-
    `printenv NAMEOFVARIABLE`
    * If it is environment variable, then its value will be displayed, otherwise nothing will be displayed, prompt just move to next line.
6. To set user wide ENV, which is accessible by user even after power off and in another terminal.
    `sudo nano ~/.bashrc`
    * Now bashrc file will be opened, put the export commands for declaring new ENVs in it , save the file and exit.
    * `source ~/.bashrc` - it will just re read the bashrc file after the changes
    * Now you can run and check that the ENVs you put in this file, are accessible always.
7. Unset Environment Variables:     `unset NAME`


## References 

1. https://linuxize.com/post/how-to-set-and-list-environment-variables-in-linux/
2. https://codeburst.io/what-are-environment-variables-the-use-case-43fdb2c7860
3. https://www.geeksforgeeks.org/environment-variables-in-linux-unix/

