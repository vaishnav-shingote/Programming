#include <stdio.h>

int main()
{
    int iNo = 751;
    int iDigit = 0;

    iDigit = iNo % 10;
    iNo = iNo / 10;
    printf("%d\n", iDigit);

    iDigit = iNo % 10;
    iNo = iNo / 10;
    printf("%d\n", iDigit);

    iDigit = iNo % 10;
    iNo = iNo / 10;
    printf("%d\n", iDigit);

    return 0;
}