---
layout: post
title:  Basic Concepts of C Part-2
author: mangalbhaskar
categories: [ Basics, C Computer Programming, Part-2]
featured: true
comments: true
---


## Overview


* Header Files
* Built in Functions
* Array


## Header Files

* math.h
    * library for evaluating various mathematical expressions.

```c
#include <math.h>
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


## Arrays

* the expression `sizeof(arr)/sizeof(arr[0])` becomes sizeof(int *)/sizeof(int) which results in 2 (size of int* is 8 bytes because its an pointer and pointer occupies the 8 bytes of memory and int is 4)




## References

* [Do Not Use sizeof For Array Parameters in C](https://www.geeksforgeeks.org/using-sizof-operator-with-array-paratmeters-in-c/)
* [why-c-treats-array-parameters-as-pointers](https://www.geeksforgeeks.org/why-c-treats-array-parameters-as-pointers/)
* [what-is-size-t-in-c](https://stackoverflow.com/questions/2550774/what-is-size-t-in-c)
