/*
Write a program which accept string from user and copy the small character
into another string. (Implement strcpy() function)

Input : "Multioperating System"
        
Output : "ultioperatingystem"        in another string
*/

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    while (*src != '\0')
    {
        if(*src>='a' && *src<='z')
        {
            *dest = *src;
            src++;
            dest++;
        }
        else
        {
            src++;
        }
    }
    *dest = '\0';    // Add null terminator
}

int main()
{
    char arr[30] = "Multioperating System";
    char brr[30];    // Empty string

    StrCpyX(arr, brr);

    printf("%s\n", brr);

    return 0;
}