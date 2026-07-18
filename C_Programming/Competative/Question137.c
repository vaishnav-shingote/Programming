// Accept a program which accept string from user and convert it into upper case.
/*  Input: "Vaishnav Shingote"
    Output : "VAISHNAV SHINGOTE"
*/
#include <stdio.h>
#include<string.h>

void struprx(char *str)
{
    int i=0;
    for (i = 0; i < strlen(str); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = (char)(str[i]-32);
        }
    }
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    struprx(arr);

    printf("Modified string is %s", arr);
}