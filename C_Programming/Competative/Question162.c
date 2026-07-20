/*
Write a program which accepts a string from the user and counts
the number of small characters.

Input  : Multi OS
Output : 4
*/

#include <stdio.h>

int CountSmall(char *str)
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
        if ((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(arr);

    if (iRet == -1)
    {
        printf("Invalid input.\n");
    }
    else
    {
        printf("Number of small characters: %d\n", iRet);
    }

    return 0;
}