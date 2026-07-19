/*
Write a program which accept string from user and accept one character.
Return the last occurence of that character.

Input : "Vaishnav Shingote"
        'a'
Output : 7

Input : "Vaishnav Shingote"
        'i'
Output : 12

*/
#include<stdio.h>
#include<string.h>

int LastChar(char *str, char ch)
{
    int i = strlen(str) - 1;
    while(i>=0)
    {
        if(str[i]==ch)
        {
            return i;
        } 
        i++;  
    }
    return -1;
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

    bRet = LastChar(arr, cValue);

    printf("Character frequency is %d\n", bRet);

    return 0;
}