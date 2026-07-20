/*
Write a program which accepts a string from the user and return difference between
frequency of small characters and frequency of capital character.

Input  : Multi OS
Output : 4
*/

#include <stdio.h>

int Difference(char *str)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    // Filter
    if (str == NULL)
    {
        return -1;
    }

    // Logic
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCnt1++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt2++;
        }

        str++;
    }

    return iCnt1 - iCnt2;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    iRet = Difference(arr);

    if (iRet == -1)
    {
        printf("Invalid input.\n");
    }
    else
    {
        printf("Difference between small and capital characters: %d\n", iRet);
    }

    return 0;
}