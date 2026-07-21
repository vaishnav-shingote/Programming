#include <stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number : \n");
    scanf("%d", &iNo1);

    printf("Enter second number : \n");
    scanf("%d", &iNo2);

    iAns = iNo1 & iNo2;
    printf("AND : %d\n", iAns);

    iAns = iNo1 | iNo2;
    printf("OR : %d\n", iAns);

    iAns = iNo1 ^ iNo2;
    printf("XOR : %d\n", iAns);

    printf("\n");

    return 0;
}