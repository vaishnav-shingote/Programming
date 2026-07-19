/*
Write a program which accept string from user and accept one character.
Return the first occurance of that character.

Input : "Vaishnav Shingote"
        'a'
Output : 2

Input : "Vaishnav Shingote"
        's'
Output : 4

*/
#include<stdio.h>
#include<string.h>

int FirstChar(char *str, char ch)
{
    int i = 0;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            return i+1;
        }   
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

    bRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", bRet);

    return 0;
}