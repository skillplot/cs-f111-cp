/*Write a program that simulates a physical calculator. The program should read
the symbol of an arithmetic operation (any of the five: +, –, *, / and %) and two
integers and display the result of the arithmetic operation. Remember to
incorporate an error check for division by zero. Solve this using (a) if statement,
(b) switch statement.*/

#include <stdio.h>

int main(void)
{
    char op;
    int int1,int2;
    int result;
    printf("Enter the operator : ");
    scanf("%c",&op);
    printf("Enter the First Integer : ");
    scanf("%i",&int1);
    printf("Enter the Second Integer : ");
    scanf("%i",&int2);
    if (op==43)
    {
        result=int1+int2;
        printf("Result of your operation is : %i\n",result);
    }
    else if (op==42)
    {
        result=int1*int2;
        printf("Result of your operation is : %i\n",result);
    }
    else if (op==45)
    {
        result = int1-int2;
        printf("Result of your operation is : %i\n",result);
    }
    else if (op==47)
    {
        if (int2==0)
        {
            printf("Division by Zero is Not Valid\n");
        }
        else
        {
            result=int1/int2;
            printf("Result of your operation is : %i\n",result);
        }
    }
    else if (op==37)
    {
        if (int2==0)
        {
            printf("Division by Zero is Not Valid\n");
        }
        else
        {
            result=int1%int2;
            printf("Result of your operation is : %i\n",result);
        }
    }
}
