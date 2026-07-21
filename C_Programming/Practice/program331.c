#include <stdio.h>

typedef unsigned int UINT;
int main()
{
    UINT iMask = 0;
    UINT iNo = 0;
    UINT iAns = 0;

    printf("Enter a number : \n");
    scanf("%d", &iNo);

    // Position 11
    iMask = 0x400;

    iAns = iNo ^ iMask;

    printf("Number after toggle 4th bit is : %d\n", iAns);

    return 0;
}