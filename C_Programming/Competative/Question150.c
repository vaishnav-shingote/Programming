/*
Write a program which accept 2 string from user and concate second string 
after first string. (Implement strcat() function).

Input : "Multioperating"
        "System"
Output : "Multioperating System"        in another string

*/

#include <stdio.h>

void StrCatX(char *src, char *dest)
{
    while (*src != '\0')
    {
        src++;
    }

    while(*dest!='\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *dest = '\0';    // Add null terminator
}

int main()
{
    char arr[30] = "Multioperating"; 
    char brr[30] = " System";

    StrCatX(arr, brr);

    printf("%s\n", arr);

    return 0;
}