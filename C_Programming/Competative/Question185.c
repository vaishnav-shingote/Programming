/*
Write a program which accept one number from user and range of positions from user. 
Toggle all bits from that range.
Input : 897
Output : 9  13
    toggle all the bits from positoin 9 to 13 od inpur number ie 879.
*/

#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;
    UINT iMask1 = 1;

    for(int i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (iMask1 << (i - 1));
    }

    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 0;
    int iPosition1 = 0, iPosition2 = 0;

    printf("Enter a number : ");
    scanf("%u", &iValue);

    printf("Enter a Positon 1 : ");
    scanf("%d", &iPosition1);

    printf("Enter a Positon 2 : ");
    scanf("%d", &iPosition2);

    printf("Modified number is %u\n",ToggleBitRange(iValue, iPosition1, iPosition2));

    return 0;
}