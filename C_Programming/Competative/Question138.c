//Write a program to accept string from user and toggle the case.
/*  Input: "Vaishnav Shingote"
    Output : "vAISHNAV sHINGOTE"
*/
#include <stdio.h>
#include<string.h>

void strtoggler(char *str)
{
    int i=0;
    for (i = 0; i < strlen(str); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = (char)(str[i]-32);
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = (char)(str[i]+32);
        }
    }
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    strtoggler(arr);

    printf("Modified string is %s", arr);
}