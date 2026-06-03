// Write a program to find even factorial for given number.
// Input: 5 , -5 , 10   Output: 8 (4*2) , 8 (4*2) , 3840 (10*8*6*4*2)

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iMultiple = 0;
    iMultiple = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iMultiple *= iCnt;
        }
    }

    return iMultiple;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}