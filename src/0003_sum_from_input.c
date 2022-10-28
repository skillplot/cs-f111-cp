#include <stdio.h>

// int variables in C can hold both negative and positive integers.
// “%d” in the above printf statement indicates that the value we are trying to print is of the type “int” (or integer). This is known as a format specifier.
// “%d” for printing int (integer) values
// “%f” for printing float values
// “%lf” for printing double values
// “%c” to print characters,
int main() {
  int num1, num2, num3;
  printf("Enter num1:");
  // captures an integer value and stores in num1
  // Address is nothing but the location in the main memory where num1 is stored. The address of a variable is accessed by prefixing & symbol before the variable name.
  scanf("%d", &num1);
  printf("Enter num2:");
  scanf("%d", &num2);

  num3 = num1 + num2;

  printf("sum is: %d\n", num3);
  return 0;
}

