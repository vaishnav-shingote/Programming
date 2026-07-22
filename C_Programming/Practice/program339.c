#include <stdio.h>

typedef unsigned int UINT;
int main()
{
    // Position 23
    UINT iMask = 0xFFBFFFFF;
    UINT iNo = 0;

    printf("Enter a number : \n");
    scanf("%d", &iNo);

    iNo = iNo & iMask;

    printf("Update number : %d\n", iNo);

    return 0;
}