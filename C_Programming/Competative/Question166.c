/*
Write a program which accept one numbaer from user and off 7th bit of that number
if it is on. Return modified number.

Input : 79
Output : 15

*/

#include<stdio.h>

typedef unsigned int UNIT;

UNIT OffBit(UNIT iNo)
{
    UNIT iMask = 0X1;

    iMask = iMask<<6;

    iMask = ~iMask;

    UNIT Ans = iMask&iNo;

    return Ans;
    
}

int main()
{
    UNIT iValue = 0;
    printf("Enter a value : \n");
    scanf("%d", &iValue);

    UNIT iRet = OffBit(iValue);

    printf("Changed number is : %d\n", iRet);
}

