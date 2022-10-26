---
id: linux-fundamentals
title: Linux Fundamentals
description: Basic fundamentals and commands
---


Earlier every operating system was designed for a particular hardware for performing a particular task, OS of one system can't be used for another operating system. Then UNIX was invented by Bell Laboratories, and it could be used on any hardware component, just needed a Kernel which was different.

Linux was developed by `Linus Torvalds` as an alternative of UNIX which could be free and easily available for everyone.


## Benefits of Linux

1. Its open source, anyone can download it free from Internet, make changes in the source code according to need, which is also freely available.
2. It is portable for any hardware platform.
3. It was made to keep running.
4. It is the most secure OS and versatile at the same time.

## Architecture of Linux

There are basically four layers in the architecture of the Linux Operating System-

            Hardware
               ^
            Kernel
               ^
             Shell
               ^
          Application layer

1. Application Layer- It is the layer where the user interacts with the various applications or software.
2. Shell- This the layer which acts as an interface between the Application and the Kernel, it is a part of CLI Linux System.
3. Kernel- It is the layer most closest to the hardware, it is specially designed for a particular hardware. It has various functions like to Allocate resources to the processes, allocate memory to particular processes, establishing a connection with external hardware etc.
4. Hardware- It is the innermost layer of this architecture.


## File Permissions in Linux

In Linux there are three types of users for a file:
* Owner of the file
* Users in the group
* Others - who might access the file

We have many files in our system, we can decide who can read the file, execute the file or modify the contents of this file. 
These are particularly known as modes. This makes it very secure.

The commands to change the owner or the modes of a file using `chown` and `chmod` respectively.


### chown

This command is used to change the owner of the file

* Suppose the current owner of a file named `linux-essentials.txt` is `livesmart` and we want to make "**avenger**" the new owner, use the following command:
    ```bash
    chown avenger linux-essentials.txt
    ```
And if we want to change the owner to and from root, we need to use sudo before the above command.
* `sudo chown root linux-essentials.txt`
* If we want to change the group just put ": " before the name of group in place of file name in the above command.
    ```bash
    chown :group1 linux-essentials.txt
    ```


### chmod

It is used for changing the mode of opening the file by a particular user, whether it be the owner, user from the group.

Let's see how we can know that what permissions are given to any user:

* `ls -l`
* After running this command you will get a list, one of which looks like this:
    ```bash
    drwxr-xr-x  5  livesmart   livesmart   4096  Jun 10  16:39   Desktop
    ```
* Here, the first part shows the permissions, lets see how
    * first letter shows whether it is a file or a directory, "d" for a directory, and "-" for a file.
    * next three letters show the permission for the owner of the file, rwx means the owner has permission to read, write as well as execute.
    * next three shows permission for user in the group, whichever letter is missing, that permission is not allowed.
    * next three show for any other user who tries to access it
* To change the permission, say , for the owner
    ```bash
    chmod u=rx file.txt
    ```
    * Now the owner will not be able to modify the file. 
    * we can use "o" and "g" in place of "u" to define for others and users in group respectively.


## Linking in Linux

In Linux we can create a link to a file, which can be used to open the file, which is similar to shortcuts in Windows.Both files will have the same content, and a change in any of the fie will be visible in the other one too.

* To know whether there is any link or not run the command:
    ```bash
    ls -li
    ```
* There are two types of links:
    * Hard link
    * Soft link

### Hard Link

In this link, the Inode value of both the source and the link is same, and thus even when when the source is deleted or shifted.  We cannot link directories via hardlink, only files are allowed. The method to create hard link:
```bash
ln [source path] [new path]
```

### Soft Link

In this link we can also link directories and if we remove the source , the link will be like hanging and not point to anything. The method to create soft link 

```bash
ln -s {source path] [new path]
```


### Shell Aliases

These are shortcuts to reference commands. These are created to avoid typing long commands and thus can be used in place of the reference commands.

```bash
alias l="ls -lrt"
alias home="cd ${HOME}"
```

## filesystem

You notice that a long string starting with the / character is printed, with words separated by the / character again. The starting / is called the root directory under which all other directories and sub-directories reside.
1. What is the parent directory of your home directory?


* **home directory is** denoted by the `~` (tilde) symbol
* **current directory** is denoted by the  `.` (period)
* while the **parent directory** is denoted by the `..` (two periods).


### References

* [Intro-Linux](https://linux.die.net/Intro-Linux/index.html)
* [Linux Commands Handbook](https://www.freecodecamp.org/news/the-linux-commands-handbook)
* [Linux Kernel Source Code](https://github.com/torvalds/linux)
