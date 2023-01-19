#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int main() {
  int * pt = (int *) malloc(sizeof(int));
  printf("pt: %p\n", pt);
  printf("pt: %d\n", *pt);

  // 1. malloc accepts number of bytes and returns a pointer (of type void) to a block of memory
  // 2. Returned pointer must be “type-cast” (i.e. type converted) to required type before use.
  // 3. malloc doesn’t initialize allocated blocks, each byte has a random value.
  // 4. The block of memory returned by malloc is allocated in heap
  // 5. Number of bytes is dynamic – unlike in arrays where size is constant.
  // 6. Can number of bytes be arbitrary? No! Memory is of finite and fixed size!

  // pointer variable declaration
  short * p1;
  int * p2;
  float * p3;

  // allocating memory to pointer variable
  p1 = (short *) malloc(sizeof(short));
  p2 = (int *) malloc(sizeof(int));
  p3 = (float *) malloc(sizeof(float));

  // assigning values
  *p1 = 256; 
  *p2 = 100; 
  *p3 = 123.456; 

  printf("p1 is %hd\n", *p1);
  printf("p2 is %d\n", *p2);
  printf("p3 is %1.0f\n", *p3);


  // dynamically allocated arrays
  int * arr = (int *) malloc(MAX_SIZE * sizeof(int));
  int * pi;
  pi = (int *) malloc(MAX_SIZE * sizeof(int));
}
