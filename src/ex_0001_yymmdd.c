#include <stdio.h>

void print_yy_mm_dd() {
  int days;
  printf("Enter Number of Days: ");
  scanf("%d", &days);

  int no_of_days, no_of_months, no_of_years;

  // Assuming 1 year has 365 days and 1 month has 30 days
  no_of_years = days / 365;
  no_of_months = (days / 30) % 12;
  no_of_days = (days % 365 ) % 30;

  printf("%d (year), %d (month), %d (days)\n", no_of_years, no_of_months, no_of_days);
}

void main() {
  printf("Namaste\n");
  print_yy_mm_dd();
}
