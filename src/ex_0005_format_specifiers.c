#include <stdio.h>

void print_format_specifiers() {
  int a = 12;
  printf("%d\n", a);
  printf("%5d\n", a);
  printf("%-5d\n", a);

  float b = 234.5678;
  printf("%f\n", b);
  printf("%.2f\n", b);
  printf("%0.2f\n", b);
  printf("%-8.2f\n", b);
  printf("%+8.2f\n", b);
  printf("%+-8.2f\n", b);

  char c = 'Y';
  printf("%c\n", c);
}

void main() {
  printf("Format specifiers\n");
  print_format_specifiers();
}
