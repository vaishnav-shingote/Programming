/*
Write a program which accepts a string from the user and counts
the number of vowel characters.

Input  : Multi OS
Output : 3
*/

#include <stdio.h>

int CountVowels(char *str)
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
        if (*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||
            *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
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

    iRet = CountVowels(arr);

    if (iRet == -1)
    {
        printf("Invalid input.\n");
    }
    else
    {
        printf("Number of VOWELS characters: %d\n", iRet);
    }

    return 0;
}