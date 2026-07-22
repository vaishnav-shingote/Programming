#include <stdio.h>

typedef unsigned int UINT;

// Position 9 & 17
int main()
{
    UINT iNo = 0;
    UINT iMask = 0x00010100;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    printf("Before Toggle bits : %d\n", iNo);

    printf("After Tollgel bits : %d\n", iMask ^ iNo);

    return 0;
}