#include <stdio.h>

int main(void)
{
    int op;
    int int1,int2;
    int result;
    printf("Enter the operator (1: Addition, 2:Multiplication, 3:Subtraction, 4:Division, 5: Modulus) ");
    scanf("%i",&op);
    printf("Enter the First Integer : ");
    scanf("%i",&int1);
    printf("Enter the Second Integer : ");
    scanf("%i",&int2);
    switch (op)
    {
        case 1:
            result=int1+int2;
            printf("Result of your operation is : %i\n",result);
            break;
        case 2:
            result=int1*int2;
            printf("Result of your operation is : %i\n",result);
            break;
        case 3:
            result = int1-int2;
            printf("Result of your operation is : %i\n",result);
            break;
        case 4:
            if (int2==0)
            {
                printf("Division by Zero is Not Valid\n");
            }
            else
            {
                result=int1/int2;
                printf("Result of your operation is : %i\n",result);
            }
            break;
        case 5:
            if (int2==0)
            {
                printf("Division by Zero is Not Valid\n");
            }
            else
            {
                result=int1%int2;
                printf("Result of your operation is : %i\n",result);
            }
            break;
    }    
}
