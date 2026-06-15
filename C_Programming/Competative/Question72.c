// Accept N numbers from user and return the smallest number.

#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iLenght)
{
    int iCnt = 0;
    int min = Arr[0];
    for (iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if (min > Arr[iCnt])
        {
            min = Arr[iCnt];
        }
    }
    return min;
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
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Minimum(p, iSize);

    printf("Smallest Number is %d", iRet);

    free(p);

    return 0;
}