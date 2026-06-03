#include <stdio.h>

void Display(int iNo)
{
    // Filter
    if (iNo < 0)
    {
        printf("Invalid input\n");
        return;
    }
    int iCnt = 0;

    for (iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d\n", iCnt);
    }
}

int main()
{

    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}