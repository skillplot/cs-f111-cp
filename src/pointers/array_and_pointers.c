#include <stdio.h>

// x: 10
// &x: 0x7ffd7566d16c
// y: 0x7ffd7566d16c
// &y: 0x7ffd7566d170
// *y: 10

int main() {
  int x[5] = {1,2,3,4,5};
  int *p;

  p = &x[0];
  // p = &x;

  printf("x: %d\n", x[0]);
  printf("*p: %d\n", *p);
  printf("*p++: %d\n", *p++);
  printf("++*p: %d\n", ++*p);
  printf("*(p+4): %d\n", *(p+4));

  p = &x[2];
  printf("*(p-1): %d\n", *(p-1));

  return 0;
}
