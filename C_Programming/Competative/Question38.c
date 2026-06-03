// Write a program which accept distance in kilometer and conver it into meter.

#include <stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance in KM : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter : %d", iRet);

    return 0;
}
