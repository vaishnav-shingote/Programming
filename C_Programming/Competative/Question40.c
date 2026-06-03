// Write a program which accept area in square feet and convert it into square meter (1 square feet = 0.0929 square meter)

#include <stdio.h>

double SquareMeter(int iValue)
{
    return iValue * 0.0929;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Distance in KM : ");
    scanf("%f", &fValue);

    dRet = SquareMeter(fValue);

    printf("Square meter : %lf", dRet);

    return 0;
}