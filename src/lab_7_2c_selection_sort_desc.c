#include <stdio.h>

int length;

void selectionSortDec(int array[])
{
  int temp;
  for(int i=0;i<length;i++)
  {
    for(int j=i+1;j<length;j++)
    {
      if(array[i]< array[j])
      {
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
      }
    }
  }
}

int main(void)
{
  int c;
  printf("Enter number of elements in array : ");
  scanf("%d", &length);
  int array[length];
  printf("Enter %d integer(s)\n", length);
  for (c = 0; c < length; c++)
    scanf("%d", &array[c]);
  selectionSortDec(array);
  printf("Sorted Array : ");
  for (c = 0; c < length; c++)
  {
    printf("%i, ",array[c]);
  }  
}
