#include <stdio.h>
#include <stdlib.h>

int SumEven(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *Brr = NULL;
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

    iRet = SumEven(Brr, iLength);

    printf("Addition of Event elements are : %d\n", iRet);

    free(Brr);

    return 0;
}