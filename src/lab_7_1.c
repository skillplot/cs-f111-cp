/*Write a program that takes 10 floating point numbers from the user as input
and stores them in an float array, and computes the maximum element,
second maximum element, minimum element, and second minimum element of
an array. Then it computes the average of the four elements computed above
and displays it to the user.*/

#include <stdio.h>

int main(void)
{
	float temp;
	float element;
	float arr[10];
	printf("Enter Elements : ");
	for (int i=0;i<10;i++)
    {
        scanf("%f",&element);
        arr[i]=element;
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]< arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The Maximum Element is : %f\n",arr[0]);
    printf("The Second Maximum Element is : %f\n",arr[1]);
    printf("The Minimum Element is : %f\n",arr[9]);
    printf("The Second Minimum Element is : %f\n",arr[8]);
    printf("The Average of the elements is : %f \n",(arr[0]+arr[1]+arr[9]+arr[8])/4);
}
