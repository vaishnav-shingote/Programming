#include <stdio.h>

typedef unsigned int UINT;

// Position 3 & 8
int main()
{
    UINT iNo = 0;
    UINT iMask = 0x00000084;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    printf("Before Toggle bits : %d\n", iNo);

    printf("After Tollgel bits : %d\n", iMask ^ iNo);

    return 0;
}