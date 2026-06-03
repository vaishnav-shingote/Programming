// Accept amount in US dollar and return its corresponding value in India currency.
// Consider 1$ = 95 rupees.

#include <stdio.h>

int DollarToINR(int iNo)
{
    return (iNo * 95);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("INR : %d", iRet);

    return 0;
}