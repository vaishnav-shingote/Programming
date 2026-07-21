#include <stdio.h>

typedef unsigned int UINT;
int main()
{
    UINT iMask = 0x1;

    printf("%d\n", iMask);
    iMask = iMask << 1;

    printf("%d\n", iMask);
    iMask = iMask << 1;

    printf("%d\n", iMask);
    iMask = iMask << 1;

    printf("%d\n", iMask);
    iMask = iMask << 1;

    return 0;
}