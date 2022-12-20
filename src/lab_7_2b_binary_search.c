#include <stdio.h>
int length;

int binarySearch(int array[], int x) 
{
  int low=0;
  int high=length-1;
  while (low <= high)
  {
    int mid = low + ((high - low) / 2);
    if (array[mid] == x)
      return mid;
    if (array[mid] < x)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}

int main(void) 
{
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  length = sizeof(array) / sizeof(array[0]);
  int search;
  printf("Enter the number to search : ");
  scanf("%d", &search);
  int result = binarySearch(array, search);
  if (result == -1)
    printf("Element not found");
  else
    printf("Element is found at index number : %d", result);
  return 0;
}
