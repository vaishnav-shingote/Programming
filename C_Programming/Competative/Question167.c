/*
Write a program which accept one numbaer from user and off 7th and 10th bit of that number
if it is on. Return modified number.

Input : 577
Output : 1

*/

#include<stdio.h>

typedef unsigned int UNIT;

UNIT OffBit(UNIT iNo)
{
    UNIT iMask1 = 0X1;
    UNIT iMask2 = 0X1;
    UNIT iMask = 0;

    iMask1 = iMask1<<6;
    iMask2 = iMask2<<9;

    iMask = iMask1 | iMask2;

    iMask = ~iMask;

    UNIT Ans = iMask&iNo;

    return Ans;
    
}

int main()
{
    UNIT iValue = 0;
    printf("Enter a value : \n");
    scanf("%u", &iValue);

    UNIT iRet = OffBit(iValue);

    printf("Changed number is : %u\n", iRet);
}

