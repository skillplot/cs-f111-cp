#include "answer.h"
#include <stdio.h>

int main(void)
{
    int score=0;
    int anskey[]={5,10,0,4};
    for (int i=1;i<5;i++)
    {
        if (answer(i)==anskey[i-1])
        {
            score++;
        }
    }
    printf("The Student scored : %i\n",score);
    return 0;
}