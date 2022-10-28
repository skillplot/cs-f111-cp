#include <math.h>
#include <stdio.h>

// d = ut + ½ at2
// Error::namaste : file not recognized: File format not recognized collect2: error: ld returned 1 exit status
int main() {
  float d, u, t, a;

  printf("Enter speed (u):");
  scanf("%f", &u);
  printf("Enter acceleration (a):");
  scanf("%f", &a);
  printf("Enter time (t):");
  scanf("%f", &t);
  d = u*t + (a * pow(t,2)) / 2;

  printf("Distance is (d): %f \n", d);
  return 0;
}

