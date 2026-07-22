#include <stdio.h>

typedef unsigned int UINT;

// Position 3 & 8
int main()
{
    UINT iNo = 0;
    UINT iMask1 = 0x00000004;
    UINT iMask2 = 0x00000080;
    UINT iMask = 0;

    iMask = iMask1 | iMask2;

    UINT iResult = 0;

    iResult = iNo ^ iMask;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    printf("Before Toggle bits : %d\n", iNo);

    printf("After Tollgel bits : %d\n", iMask ^ iNo);

    return 0;
}