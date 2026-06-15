// Accept N numbers from user and display summation of digits of each number.

#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iLenght)
{
    int iCnt = 0, iDigit = 0;
    for (iCnt = 0; iCnt < iLenght; iCnt++)
    {
        int iSum = 0;
        while (Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        printf("%d ", iSum);
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements \n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);

    return 0;
}
