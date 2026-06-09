// Write a program which accept range from user and display addition of all even numbers in between that range

#include <stdio.h>

int RangeSumEven(int iSart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = iSart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
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

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Additon id %d", iRet);

    return 0;
}
