/*
Write a program which accept one number and position from user and toggle
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

int ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;
    UINT Ans = 0;

    Ans = iMask ^ iNo;

    return Ans;
}

int main()
{
    int iValue = 0, iPosition=0;
    printf("Enter the number : ");
    scanf("%u", &iValue);

    printf("Modified number is : %u", ToggleBit(iValue));

}