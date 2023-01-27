#include "reverseArray.h"
#include <stdio.h>

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {23,34,1209,12312};
    printf("\nArrays before reversing\n");
    printArray(arr1,5);
    printArray(arr2,4);
    reverseArray_PassByReference(arr1,5);
    reverseArray_PassByReference(arr2,4);
    printf("\nArrays after reversing using pass by Reference\n");
    printArray(arr1,5);
    printArray(arr2,4);
    reverseArray_PassByPointers(arr1,5);
    reverseArray_PassByPointers(arr2,4);
    printf("\nArrays after reversing again using pass by Pointers\n");
    printArray(arr1,5);
    printArray(arr2,4);
    return 0;
}