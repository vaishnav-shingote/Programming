/*
Write a program which accept string from user and copy the contents of
that string into another string. (Implement strcpy() function)

Input : "Multioperating System"
            10
Output : "Multiopera"        in another string

Note : If third parameter is greater than the size of source string then
copy the whole string into destination
*/


#include <stdio.h>

void StrCpyX(char *src, char *dest, int iCnt)
{
    while (*src != '\0' && iCnt!=0)
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';    // Add null terminator
}

int main()
{
    char arr[30] = "Multioperating System";
    char brr[30];    // Empty string

    StrCpyX(arr, brr, 10);

    printf("%s\n", brr);

    return 0;
}