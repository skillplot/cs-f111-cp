#include "reverseArray.h"
//complete this function based on the definitions in reverseArray.h
void reverseArray_PassByReference(int arr[], int size)
{
    int temp;
    int effsize;
    if (size%2==0)
        effsize=(size/2)-1;
    else 
        effsize=((size+1)/2)-1;
    for(int a=0;a<=effsize;a++)
    {
        temp=arr[a];
        arr[a]=arr[size-a-1];
        arr[size-a-1]=temp;
    }
}