#include <stdio.h>

int linearSearch(int array[],int search)
{
  int len = sizeof(array) / sizeof(array[0]);
  int c;
  for (c = 0; c < 10; c++)
  {
    if (array[c] == search)
    {
      return c;
    }
  }
  return -1;
}

int main(void)
{
  int n=10;
  int search,rval;
  int array[n];
  printf("Enter %d integer(s) : ", n);
  for (int c = 0; c < n; c++)
    scanf("%d", &array[c]);
  printf("Enter the number to search : ");
  scanf("%d", &search);
  rval=linearSearch(array,search);
  if (rval==-1)
  {
    printf("Element not found\n");
  }
  else
  {
    printf("Element found at index number : %i\n",rval);
  }
  return 0;
}
