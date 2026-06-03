// Write a progra which returns difference between Even factorial and odd factorial of given number.

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenMultiple = 0, iOddMultiple = 0;
    iEvenMultiple = 1, iOddMultiple = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iEvenMultiple *= iCnt;
        }
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            iOddMultiple *= iCnt;
        }
    }

    return iEvenMultiple - iOddMultiple;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}