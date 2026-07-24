/*
Write a program which accept one number and position from user and on
Input : 10 3
Output : 14
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

int OnBit(UINT iNo, int iPos)
{
    UINT iMask = 0x1;
    UINT Ans = 0;

    iMask = iMask<<(iPos-1);

    Ans = iMask | iNo;

    return Ans;
}

int main()
{
    int iValue = 0, iPosition=0;
    printf("Enter the number : ");
    scanf("%u", &iValue);

    printf("Enter your Position: ");
    scanf("%d", &iPosition);

    printf("Modified number is : %u", OnBit(iValue, iPosition));

}