#include <stdio.h>

void print_simple_interest() {
  // simple_interest, principal, time, rate;
  float si, p, r , t;

  printf("Enter Principal amount (Rs) (P):");
  scanf("%f", &p);

  printf("Enter Rate of Interest (R):");
  scanf("%f", &r);

  printf("Enter Time duration (years) (T):");
  scanf("%f", &t);

  si = p*r*t;
  printf("---\nYou have to pay Simple Interest (SI) of amount Rs. %d /-\n", (int)si);
}

void main() {
  printf("Calculate Simple Interest (SI) where SI = PxRxT\n");
  print_simple_interest();
}
