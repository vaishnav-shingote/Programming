// Write a program which accept range from user and display all  numbers in reverse order.

#include <stdio.h>

void RangeDisplayRev(int iSart, int iEnd)
{
    int iCnt = 0;
    for (iCnt = iEnd; iCnt >= iSart; iCnt--)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
