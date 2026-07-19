/*
Write a program which accept string from user and accept one character.
Check whether that cahracter is presint in string or not.

Input : "Vaishnav Shingote"
        'g'
Output : True

Input : "Vaishnav Shingote"
        'w'
Output : False

*/
#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int i = 0;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            return TRUE;
        }
        i++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter the string : \n");
    scanf("%[^\n]s", arr);

    printf("Enter the Character : \n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}