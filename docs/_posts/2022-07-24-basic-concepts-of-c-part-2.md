---
layout: post
title:  Basic Concepts of C Part-2
author: mangalbhaskar
categories: [ Basics, C Computer Programming, Part-2]
featured: true
comments: true
---


## Overview


* Built in Functions

## Program Structure


```c
// Namaste World - First Program
// 0001_namaste.c
#include <stdio.h>

int main() { 
  printf("Namaste\n");
  return 0;
}
```

* Any C program must be stored in a file that has `.c` extension. This is required by the C compiler. C compiler also reads files with `.h` extension.
* Any arbitrary C Program you write always starts with `int main()` and should contain `return` statement at the end.
* `int main()`
    * is the definition of the main function, which is the place from where any C program starts its execution.
    * The return value is the exit code of your program.
    * `return 0` is the statement that states that the program has terminated. 
    * The 0 exit code is a widely accepted convention for `OK the program execution was successful`.


## Header Files

* stdio.h
* math.h
    * library for evaluating various mathematical expressions.

```c
#include <math.h>
#include <stdio.h>
```

## Built in Functions

* `Sizeof`
    ```c
    sizeof(char);
    sizeof(short);
    sizeof(int);
    sizeof(long);
    // sizeof(f);
    sizeof(double);
    sizeof(1.55);
    sizeof(1.55L);
    sizeof("Hello");
    ```