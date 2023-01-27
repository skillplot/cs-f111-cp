#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size,result=0;
    printf("Enter the Size of Array : \n");
    scanf("%i",&size);
    int *arr1=calloc(size,sizeof(int));
    int *arr2=calloc(size,sizeof(int));
    printf("Enter the elements of the first array : \n");
    for(int a=0;a<size;a++)
        scanf("%i",arr1+a);
    printf("Enter the elements of the second array : \n");
    for(int a=0;a<size;a++)
        scanf("%i",arr2+a);
    for(int a=0;a<size;a++)
    {
        result = result + ((arr1[a])*(arr2[a]));
    }
    printf("Dot Product of both the Arrays is %i \n",result);
    free(arr1);
    free(arr2);
}
