// Write a program which accept radius of circle and calculate its area.

#include <stdio.h>

#define PI 3.14

double CircleArea(float fRadius)
{
    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf", dRet);

    return 0;
}