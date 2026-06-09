#include <stdio.h>
#include <stdlib.h>

int CountFrequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *Brr = NULL;
    int iValue = 11;
    printf("Enter number of elements : ");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter elements : \n");

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    if (Brr == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    iRet = CountFrequency(Brr, iLength, iValue);

    printf("Frequency of elements 11 is : %d\n", iRet);

    free(Brr);

    return 0;
}