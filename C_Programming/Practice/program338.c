#include <stdio.h>

typedef unsigned int UINT;
int main()
{
    // Position 13
    UINT iMask = 0xFFFFEFFF;
    UINT iNo = 0;

    printf("Enter a number : \n");
    scanf("%d", &iNo);

    iNo = iNo & iMask;

    printf("Update number : %d\n", iNo);

    return 0;
}