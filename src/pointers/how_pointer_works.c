#include <stdio.h>

// x: 10
// &x: 0x7ffd7566d16c
// y: 0x7ffd7566d16c
// &y: 0x7ffd7566d170
// *y: 10

int main() {
  int x = 10;
  int *y = &x;

  printf("x: %d\n", x);
  printf("&x: %p\n", &x);
  printf("y: %p\n", y);
  printf("&y: %p\n", &y);
  printf("*y: %d\n", *y);
  return 0;
}
