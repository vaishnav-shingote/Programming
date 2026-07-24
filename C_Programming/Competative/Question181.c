/*
Write a program which accept one number from user and count number of ON(1)
bits in it without using % and / operator.

Input : 11
Output : 3
*/

#include <stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    UINT iMask = 0x1;
    int iCount = 0;
    int iPos;

    for(iPos = 0; iPos < 32; iPos++)
    {
        if((iNo & iMask) == iMask)
        {
            iCount++;
        }

        iMask = iMask << 1;
    }

    return iCount;
}

int main()
{
    UINT iValue = 0;

    printf("Enter a number : ");
    scanf("%u", &iValue);

    printf("No of ON bits are : %d\n", CountOne(iValue));

    return 0;
}