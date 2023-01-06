/*Write a C program to input week number (1-7) and print day of week name
using switch case. For example. If the user inputs 2, the program should
output the second day of the week i.e., “Tuesday”. [Note: for the purpose of this
exercise you can consider that a week starts from Monday.]*/

#include <stdio.h>

int main(void)
{
    int day;
    printf("Enter a number (1 to 7) : ");
    scanf("%i",&day);
    switch(day)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
    }
    return 0;
}
