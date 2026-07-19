/*
Write a program which accept string from user and copy the contents of
that string into another string. (Implement strcpy() function)

Input : "Multioperating System"
Output : "Multioperating System"        in another string
*/

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
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