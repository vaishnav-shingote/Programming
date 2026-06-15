// Accept N numbers from user and return such a number which contains 3 digits in it.

#include <stdio.h>
#include <stdlib.h>

int Digits(int Arr[], int iLenght)
{
    int iCnt = 0, iDigit = 0;
    for (iCnt = 0; iCnt < iLenght; iCnt++)
    {
        int iCount = 0;
        int temp = Arr[iCnt];
        while (Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iCount++;
            Arr[iCnt] = Arr[iCnt] / 10;
        }

        if (iCount == 3)
        {
            return temp;
        }
    }
    return -1;
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

    iRet = Digits(p, iSize);

    printf("3 digit Number is %d", iRet);

    free(p);

    return 0;
}
