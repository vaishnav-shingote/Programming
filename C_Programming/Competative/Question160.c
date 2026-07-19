/*
Accept division of student from user and depending on the division,
display the exam timing. There are 4 divisions in the school:
A, B, C, and D.

Exam Schedule:
Division A -> 7.00 AM
Division B -> 8.30 AM
Division C -> 9.20 AM
Division D -> 10.30 AM

The application should be case-insensitive.

Input : C
Output : Your exam at 9.20 AM

Input : d
Output : Your exam at 10.30 AM
*/

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A':
        case 'a':
            printf("Your exam at 7.00 AM\n");
            break;

        case 'B':
        case 'b':
            printf("Your exam at 8.30 AM\n");
            break;

        case 'C':
        case 'c':
            printf("Your exam at 9.20 AM\n");
            break;

        case 'D':
        case 'd':
            printf("Your exam at 10.30 AM\n");
            break;

        default:
            printf("Invalid Division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Division : ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}