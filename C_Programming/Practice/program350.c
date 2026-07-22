#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBits(int iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 0X1, iMask2 = 0X1, iMask = 0;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;
}

int main()
{
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    printf("Enter first bit position : \n");
    scanf("%d", iLocation1);

    printf("Enter second bit position : \n");
    scanf("%d", iLocation2);

    iRet = ToogleBits(iValue, iLocation1, iLocation2);

    printf("Updated number : %d\n", iRet);

    return 0;
}