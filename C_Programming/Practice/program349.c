#include <stdio.h>

typedef unsigned int UINT;

// Position 3 & 8
int main()
{
    UINT iNo = 0;
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    UINT iMask = 0;

    UINT iResult = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    iMask1 = iMask1 << 2;
    iMask2 = iMask2 << 7;

    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;

    printf("Before Toggle bits : %d\n", iNo);

    printf("After Tollgel bits : %d\n", iMask ^ iNo);

    return 0;
}