---
layout: post
title:  Basic Concepts of C Part-1
author: mangalbhaskar
categories: [ Basics, C Computer Programming, Part-1 ]
featured: true
comments: true
---


## Overview

Concepts covered in Part-1

* C Program Structure
* Built in Functions
* Header Files
    * stdio.h
    * math.h
* Compilation and Execution
    * Using gcc
    * gcc as assembler
* Escape Sequences
* Data Types
* Format Specifiers
* Mathematical Operators and Operations
* Printing on console using `printf`
* Taking input from user using `scanf`


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

```c
#include <stdio.h>
```

## Built in Functions

* `printf`
    * print to console.
    * Double quote marks to be used and not single quote.
        ```c
        printf("Enter number:");
        ```
* `scanf`
    * scans for input from the user during the program execution and stores the value in a variable
    * Double quote marks to be used and not single quote.
        ```c
        int num;
        scanf("%d", &num);
        ```
        * This indicates that the value you are scanning is an integer `%d` and you want to store that value in num1 by specifying the address of the variable `num`.
        * `&num` to denote the address of the variable `num` in the main memory.


## Compilation and Execution

Using `gcc` compiler.

* There are four main stages through which a source code is passed in order to finally get a runnable executable. 
    1. pre-processing
    2. compilation
    3. assembly
    4. linking
* By invoking `gcc` command, all these steps are accomplished.
* You can stop this pipeline at a specific stage by giving specific options for gcc.
* When compiled an executable with the name `a.out` is created if no output file name is provided.
* And then you execute that executable using the command `./a.out`.

```bash
## default compilation; binary output is always a.out if output filename is not provided.
gcc 0001_namaste.c
./a.out
```

```bash
## invoking the assembler
gcc -S 0001_namaste.c
```

```bash
## best practice is to put the compiled code in the separate directory; by convention it is named as `build`
mkdir -p build
gcc 0001_namaste.c -o build/0001_namaste.out
./build/0001_namaste.out
```

## Escape Sequences

* [escape-sequences-in-c](https://www.tutorialspoint.com/escape-sequences-in-c)

|Escape Sequence | Description |
|:---|:---|
| `\t` | Inserts a tab in the text at this point |
| `\b` | Inserts a backspace in the text at this point |
| `\n` | Inserts a newline in the text at this point |
| `\r` | Inserts a carriage return in the text at this point |
| `\f` | Inserts a form feed in the text at this point |
| `\'` | Inserts a single quote character in the text at this point |
| `\"` | Inserts a double quote character in the text at this point |
| `\ ` | Inserts a backslash character in the text at this point |


## Data Types

A variable is a placeholder for a value that you want to store.

```c
//character
char ch = 'A'; 
//string
char str[20] = "Computer";
//float
float flt = 10.234;
//integer
int no = 150;
//double
double dbl = 20.123456;
```


## Format Specifier

| format specifier | data type |
|:---|:---|
| %c  | char |
| %s  | string |
| %d  | int |
| %f  | foat |
| %lf | double |
| %o  | octal |
| %x  | Hexadecimal |


## Operators and Operations

```c
int num1, num2, num3;
// Addition: 
num3 = num1 + num2
// Subtraction:
num3 = num1 - num2
// Multiplication:
num3 = num1 * num2
// Integer Division:
// NOTE: This is integer division 3/2 is not 1.5
num3 = num1 / num2
// Modulus (or remainder after division)
num3 = num1 % num2
```

## Exercise

* Write a C program that reads in an integer denoting number of days. It prints the number of years, number of months and the number of days that constitute the input number of days. For example, if the input number is 403, it should print 1(year), 1(month), 13(days). For simplicity: there is no need to consider leap years and assume all months have 30 days. [Hint: Use modulus (%) and division (/) operators. End of Hint]
* Write a C program to enter Principal (P), Time (T), Rate of Interest (R) and calculate Simple Interest (SI) and show it to the user. Note that `SI = PxRxT`.
* Write a C program to print a block F using hash (#), where the F has a height of six characters and width of five and four characters. And also to print a big 'C'.
* Explore and learn more about printf() format specifiers.
* A computer manufacturing company has the following monthly compensation policy to their salespersons: Minimum base salary : 1500.00; Bonus for every computer sold : 200.00; Commission on the total monthly sales : 2 percent. Since the prices of computers are changing, the sale price of each computer is fixed at the beginning of every month. Write a C program, “computer_sales.c”, to compute a sales-person's bonus, commission and gross salary. Your program should take the number of computers sold (in a month) and the sale price of a computer as user input.


## Try It Yourself

* 0001_namaste.c
* 0002_sum.c
* 0003_sum_from_input.c
* 0004_integer_ops.c
* 0005_distance.c
* 0006_formats.c
* ex_0001_yymmdd.c
* ex_0002_simple_interest.c
* ex_0003_printchar_with_hash.c
* ex_0005_format_specifiers.c
* ex_0006_employee_compenstation.c


## FAQs

* What is the default value of a variable before assigning any value in the program?
* What are the various types of format specifiers used to print various types of values?
* What are the errors when:
    * a) semicolon is missing at the end of the line
    * b) One of the braces are left out
    * c) One of the parentheses next to the main function is left out
