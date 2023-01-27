//reverseArray.h
//This function takes an array as pass by reference. 
//size is the number of elements in the array
//The function reverses the array
// for eg. if arr1 is [1,2,3,4,5] the function changes it to [5,4,3,2,1]
void reverseArray_PassByReference(int arr[], int size);

//This function takes an array as pass by pointers. 
//size is the number of elements in the array
//The function reverses the array
// for eg. if arr1 is [1,2,3,4,5] the function changes it to [5,4,3,2,1]
void reverseArray_PassByPointers(int* arr, int size);