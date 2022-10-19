---
id: basics-linux-commands
title: Basic Linux Commands
description: Basic Linux Commands
---

Linux CLI (Command Line Interface) is robust and powerful interface to interact with the Linux operating system. We use linux `terminal` application to interact with the CLI. We need to know basic commands to use the command line.


* `man` - Displays the user manual of any command that we can run on the terminal
    ```bash
    ## displays the manual of ls command along with all its options
    man ls 
    ## displays the manual of cat command etc.
    man cat
    ```
* `pwd` - Displays the path of the current working directory
* `ls` - Lists the content of a directory. Can be executed with various options like -a, -l, etc.
    ```bash
    ## Displays content of the current directory
    ls      
    ## Displays the contents of the current directory along with hidden files
    ls -a   
    ## Displays the contents of the current directory along with various other details such as the owner of this file, the read/write permissions of the file, the date and time stamp when the file was last updated, etc.
    ls -l   
    ## Same as ls -l but now displays details for hidden files as well
    ls -al  
    ```
* `cd` - Changes the current directory of the shell
    ```bash
    ## Takes you to the root directory 
    cd /      
    ## Takes you to the parent of the current directory
    cd ..     
    ## Takes you to the parent of the parent of the current directory
    cd ../..  
    ## Takes you to the previous directory you were working in
    cd -      
    ## Takes you to your home directory
    cd ~      
    ```
* `mkdir` - Making a new directory
    ```bash
    ## creates a directory named n_dir
    mkdir n_dir  
    ##  create nested directories.
    ## e.g.  mkdir -p  m_dir/hello/world    //creates a world directory inside a hello directory which itself is inside m_dir directory
    mkdir -p  m_dir/hello/world
    ```
* `rmdir` - Removing a directory
    ```bash
    ## removes directory dir, provided it is empty
    rmdir m_dir
    ## deletes a directory recursively along with its content.
    rm -r m_dir
    ```
* `touch` - it is used to create an empty file.
    ```bash
    ## Create empty file with file1.txt
    touch file1.txt
    ```
* `cat` - Displays the content of a file 
    ```bash
    ##  Displays the content of the file1
    cat file1       
    ##  Opens file1 for writing into it, if file1 already exists. Otherwise, creates file1 and opens it for writing into it. 
    cat > file1     
    ##  Displays the content of file1 followed by the content of file2
    cat file1 file2 
    ```
* `cp` - Copying the content of a file
    ```bash
    ## copies the content of file1 in file2. Overwrites file2’s content
    cp file1 file2
    ## copies all files (file1 to filen) into the dest directory
    cp file1 file2 …. filen dest
    ## copies file1 into your home directory
    cp file1 ~
    ## Whe suffix  into dest directory
    ## copies all files that have their file names with ".txt” a"
    cp *.txt dest
    ```
* `mv` - Used to move one or more files or directories from one place to another and also for renaming a file or a directory
    ```bash
    ## rename f1.txt to f2.txt 
    mv f1.txt f2.txt
    ## move f1.txt to the directory dir
    mv f1.txt dir/
    ## move f1.txt to the directory dir/new/name/
    mv f1.txt dir/new/name/
    ```
* `wc` - Counting words or lines
    ```bash
    ## counts the number of lines in file1.txt
    wc -l file1.txt
    ## counts the number of words in file1.txt
    wc -w file1.txt
    ## counts the number of bytes in file1.txt
    wc -c file1.txt
    ## counts the number of characters in file1.txt
    wc -m file1.txt
    ```
* `head` - print the top N number of data of the given input. 
    ```bash
    ## prints the first 10 lines of file1.txt
    head file1.txt
    ## Prints the first 5 lines of file1.txt
    head -n 5 file1.txt
    ## Prints the first 5 lines of file1.txt
    head -5 file1.txt
    ## prints the first 2 bytes of file1.txt
    head -c 2 file1.txt
    ```
* `tail` - print the last N number of data of the given input. 
    ```bash
    ## Prints the last 10 lines of file1.txt
    tail file1.txt
    ## Prints the last 5 lines of file1.txt
    tail -n 5 file1.txt
    ## Prints the last 5 lines of file1.txt
    tail -5 file1.txt
    ## Prints the last 2 bytes of file1.txt
    tail -c 2 file1.txt
    ```
* `echo` - used to display lines of text/string that are passed as an argument 
    ```bash
    ## Will display hello world on the terminal
    echo "Hello world"
    ```
* `date` -  Displays the current date and time, day, month name, day of the month, the time zone name, and the year.
* `whoami` - Displays the user name of the current user 
* `who` - Displays information about all users currently logged in. 
* `clear` - Clears the screen
* `cal` - Displays the calendar of a specific month or a whole year.
* `hostname`- Print the host name of the current system.
* `hostnamectl` - Displays OS name and version 
* `uname -r` - Displays kernel version
* `type` - This command is used to know the type of any command. It has some options for  various purposes
    ```bash
    ## command- It will tell us whether the command is alias, keyword or a function, and also tell the path of the executable file.
    type -a
    ## command- It will print whether the command is alias, keyword, builtin, function or a file
    type -t
    ## - It will print the name of the disc file which would be executed
    type -p
    ```

* `grep` - This command is used for searching any file for a particular pattern or a word.
* `find` - This is used to search for a file with particular keywords
* `locate` - This command is used for locating any  file by name.
* `chown`
* `chmod`
* `sudo`
* `ln`
* `alias`
