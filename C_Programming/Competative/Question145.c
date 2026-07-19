/*
Write a program which accept string from user and reverse the string in place.

Input : "Vaishnav"
Output : "vanhsiaV"
*/
#include<stdio.h>
#include<string.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str + strlen(str)-1;

    char temp = '\0';

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter the string : \n");
    scanf("%[^\n]s", arr);

    StrRevX(arr);

    printf("Modified string is %s", arr);

    return 0;
}