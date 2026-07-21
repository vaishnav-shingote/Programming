#include <stdio.h>

typedef unsigned int UINT;
int main()
{
    UINT iMask = 0xFFFFFFF7;
    UINT iNo = 0;

    printf("Enter a number : \n");
    scanf("%d", &iNo);

    iNo = iNo & iMask;

    printf("Update number is : %d\n", iNo);

    return 0;
}