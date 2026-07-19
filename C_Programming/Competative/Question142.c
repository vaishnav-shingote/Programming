/*
Write a program which accept string from user and accept one character.
Return frequency of that character.

Input : "Vaishnav Shingote"
        'a'
Output : 2

Input : "Vaishnav Shingote"
        's'
Output : 1

*/
#include<stdio.h>
#include<string.h>

int CountChar(char *str, char ch)
{
    int i = 0;
    int iCount = 0;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            iCount++;
        } 
        i++;  
    }
    return iCount;
}

int main()
{
    char arr[20];
    char cValue;
    int bRet = 0;

    printf("Enter the string : \n");
    scanf("%[^\n]s", arr);

    printf("Enter the Character : \n");
    scanf(" %c", &cValue);

    bRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", bRet);

    return 0;
}