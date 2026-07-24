/*
Write a program which accept one number from user, two positoins from user and 
check whether bit at first or bit at second positon is ON or OFF
Input : 10  3   7
Output : TRUE
*/

#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;

    UINT iMask = 0;


    UINT Ans = 0;

    iMask1 = iMask1<<iPos1-1;
    iMask2 = iMask2<<iPos2-1;

    iMask = iMask1 | iMask2;

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
    int iPosition1 = 0, iPosition2 = 0;

    printf("Enter a number : ");
    scanf("%u", &iValue);

    printf("Enter a Positon 1 : ");
    scanf("%d", &iPosition1);

    printf("Enter a Positon 2 : ");
    scanf("%d", &iPosition2);

    int iRet = ChkBit(iValue, iPosition1, iPosition2);

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