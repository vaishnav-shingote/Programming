/*
Write a program which accept one number from user and check whether 9th or 12th bit
is on or off.
Input : 257
Output : TRUE
*/

#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x900;

    UINT Ans = 0;

    Ans = iMask & iNo;

    if(Ans!=0)
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
    UINT iValue = 0;

    printf("Enter a number : ");
    scanf("%u", &iValue);

    int iRet = ChkBit(iValue);

    if(iRet == TRUE)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}