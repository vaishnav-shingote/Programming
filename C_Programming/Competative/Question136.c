// Accept a program which accept string from user and convert it into lower case.
/*  Input: "Vaishnav Shingote"
    Output : "vaishnav shingote"
*/

#include <stdio.h>
#include <string.h>

void strlwrx(char *str)
{
    int i=0;
    for (i = 0; i < strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
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

    strlwrx(arr);

    printf("Modified string is %s", arr);
}


/*

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void strlwrx(char *str)
{
    int i=0;
    for (i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    printf("Modified string is %s", arr);
}

*/

