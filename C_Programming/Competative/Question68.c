// Accept N numbers from user and accept one another number as No, return index of last occurance of that No

#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if (Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int iSize = 0, iRet = 0, iValue = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d", &iSize);

    printf("Enter the number");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d :", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = FirstOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurace of number is %d", iRet);
    }

    free(p);

    return 0;
}