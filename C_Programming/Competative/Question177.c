/*
Write a program which accept one number and position from user and off
Input : 10 2
Output : 8
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

int OffBit(UINT iNo, int iPos)
{
    UINT iMask = 0x1;
    UINT Ans = 0;

    iMask = iMask<<(iPos-1);

    iMask = ~iMask;
    Ans = iMask & iNo;
    
    return Ans;
}

int main()
{
    int iValue = 0, iPosition=0;
    printf("Enter the number : ");
    scanf("%u", &iValue);

    printf("Enter your Position: ");
    scanf("%d", &iPosition);

    printf("Modified number is : %u", OffBit(iValue, iPosition));

}