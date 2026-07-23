//Write a program which checks whether first and last (1 & 32) bit is ON or OFF.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x80000001;

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