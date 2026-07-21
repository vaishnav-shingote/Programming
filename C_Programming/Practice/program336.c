#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1;
    UINT iResult = 0;

    if (iPos < 1 || iPos > 32)
    {
        printf("Invalid bit Position\n");
        return iNo;
    }

    // Position : 4
    iMask = iMask << (iPos - 1);
    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0, iLocation = 0;

    printf("Enter a number : \n");
    scanf("%u", &iValue);

    printf("Enter bit Position : ");
    scanf("%u", &iLocation);

    iRet = OffBit(iValue, iLocation);

    printf("Updated Number is : %u\n", iRet);

    return 0;
}