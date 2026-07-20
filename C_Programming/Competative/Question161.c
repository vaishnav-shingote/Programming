/*
Write a program which accepts a string from the user and counts
the number of capital characters.

Input  : Multi OS
Output : 3
*/

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    // Filter
    if (str == NULL)
    {
        return -1;
    }

    // Logic
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    iRet = CountCapital(arr);

    if (iRet == -1)
    {
        printf("Invalid input.\n");
    }
    else
    {
        printf("Number of capital characters: %d\n", iRet);
    }

    return 0;
}