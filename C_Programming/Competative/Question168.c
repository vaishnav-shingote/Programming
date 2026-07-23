/*
Write a program which accept one numbaer from user and toggle 7th bit of that number
if it is on. Return modified number.

Input : 137
Output : 201

*/

#include<stdio.h>

typedef unsigned int UNIT;

UNIT OffBit(UNIT iNo)
{
    UNIT iMask = 0X1;


    iMask = iMask<<6;

    UNIT Ans = iMask^iNo;

    return Ans;
    
}

int main()
{
    UNIT iValue = 0;
    printf("Enter a value : \n");
    scanf("%u", &iValue);

    UNIT iRet = OffBit(iValue);

    printf("Modified number is : %u\n", iRet);
}

