/*
Write a program which accept twp numbers from user and count number of common ON(1)
bits from the numbers.

Input : 10 15   (1010   1111)
Output :2  4     
*/

#include <stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iNo = iNo1 & iNo2;
    UINT iMask = 0x1;
    int iCount = 0;
    int iPos;

    for(iPos = 0; iPos < 32; iPos++)
    {
        if((iNo & iMask) == iMask)
        {
            printf("%d\t", iPos+1);
        }

        iMask = iMask << 1;
    }

}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter a number : ");
    scanf("%u", &iValue1);

    printf("Enter a number : ");
    scanf("%u", &iValue2);

    CommonBits(iValue1, iValue1);

    return 0;
}