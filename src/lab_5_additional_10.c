/*Write a program that reads an integer value for n and then sums the integers
from n to 2*n if n is nonnegative, or from 2*n to 3*n if n is negative.*/

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i",&n);
    if (n>=0)
    {
        int sum=0;
        for(int i=n;i<=2*n;i++)
        {
            sum=sum+i;
        }
    }
    else
    {
        int sum=0;
        for(int i=2*n;i<=3*n;i++)
        {
            sum=sum+i;
        }
    }
}
