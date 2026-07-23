//Write a program which checks whether 5th and 18th bit is ON or OFF.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 0x00000010;
    UINT iMask2 = 0X00020000;

    UINT iMask = iMask1 | iMask2;
    
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
        printf("15th bit is On\n");
    }
    else
    {
        printf("15th bit is Off");
    }
}