// Write a program which accept range from user and return addition of all numbers in between that range (range should contains positive numbers only)

#include <stdio.h>

int RangeSum(int iSart, int iEnd)
{
    if (iSart < 0 || iEnd < 0)
    {
        return -1;
    }
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = iSart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if (iRet == -1)
    {
        printf("Please enter positive numbers only\n");
    }
    else
    {
        printf("Addition is %d", iRet);
    }

    return 0;
}
