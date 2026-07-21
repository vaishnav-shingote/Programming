#include <stdio.h>

typedef unsigned int UINT;
int main()
{
    UINT iMask = 0x1;
    UINT iNo = 0;
    UINT iAns = 0;
    UINT iPos = 0;

    printf("Enter a number : \n");
    scanf("%d", &iNo);

    printf("Enter bit Position : ");
    scanf("%d", &iPos);

    iMask = iMask << (iPos - 1);

    iAns = iNo ^ iMask;

    printf("Number after toggle bit is : %d\n", iAns);

    return 0;
}