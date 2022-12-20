/*Your task is to design an evaluation system for an online quiz based on
multiple choice questions. The program should ask the user to enter the
number of questions in the quiz and the correct answer pattern of the
questions. 1 (one) mark is given to each correct answer and 0 (zero) for the
wrong one. There is no negative marking and 0 marks should be given for
un-attempted questions. Each student’s answer pattern would be given as
input at a time, and evaluated against the “keys” pattern. The output should
print total score obtained by the student. After printing the result of the
student, the program should ask the user whether he/she wants to continue
evaluating another student or stop the program. Make use of arrays to store
the keys and the answer pattern of the student entered by the user.*/

#include <stdio.h>

int main(void)
{
    int ques;
    printf("Enter the Number of Questions : ");
    scanf("%i",&ques);
    char anskey[ques];
    char userkey[ques];
    char name[255];
    int marks;
    int rep;
    printf("Enter the Answer key to the Exam : ");
    scanf("%s",anskey);
    while(1)
    {
        marks=0;
        printf("Enter the name of the student : ");
        scanf("%s",name);
        printf("Enter the Responses of %s : ",name);
        scanf("%s",userkey);
        for (int j=0;j<=ques;j++)
        {
            if (anskey[j]==userkey[j])
            {
                marks++;
            }
        }
        printf("Marks gained by %s are %i\n",name,marks);
        printf("Do you want to check for another user ? (0 for yes/1 for no) : ");
        scanf("%i",&rep);
        if (rep==1)
        {
            break;
        }
    }
}
