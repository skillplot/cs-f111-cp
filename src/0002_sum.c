#include <stdio.h>

// int variables in C can hold both negative and positive integers.
// “%d” in the above printf statement indicates that the value we are trying to print is of the type “int” (or integer). This is known as a format specifier.
// “%d” for printing int (integer) values
// “%f” for printing float values
// “%lf” for printing double values
// “%c” to print characters,
int main() {
  int num1, num2, num3;
  printf("num1 is: %d\n", num1);
  printf("num2 is: %d\n", num2);
  printf("num3 is: %d\n", num3);

  num1 = 2;
  num2 = 4;
  num3 = num1 + num2;

  printf("sum is: %d\n", num3);
  return 0;
}

