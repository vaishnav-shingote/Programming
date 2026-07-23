//Write a program which checks whether 7th & 8th & 9th & bit is ON or OFF.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x1C0;

    UINT Ans = 0;
    
    Ans = iMask & iNo;

    if(Ans == iMask)
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
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d", &iValue);

    BOOL bRet = ChkBit(iValue);
    
    if(bRet == TRUE)
    {
        printf("5th and 18th bit is On\n");
    }
    else
    {
        printf("5th and 18th bit is Off");
    }
}