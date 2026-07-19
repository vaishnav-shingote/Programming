/*
Accept Character from user and check whether it is capital or not (A-Z)

Input : F
Output : TRUE

Input : &
Output : FALSE
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("Is is Capital character\n");
    }
    else
    {
        printf("It is not a capital Character\n");
    }

    return 0;
}