#include <stdio.h>

int main()
{
    unsigned iNo = 0;
    unsigned iMask = 4;
    unsigned iAns = 0;

    printf("Enter number : \n");
    scanf("%d", &iNo);

    iAns = iNo & iMask;

    if (iAns == iMask)
    {
        printf("3rd bit is ON");
    }
    else
    {
        printf("3rd bit is OFF");
    }

    return 0;
}