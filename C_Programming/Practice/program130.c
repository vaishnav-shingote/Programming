#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iLength = 0, iCnt = 0, bRet = false;
    int *Brr = NULL;
    int iValue = 0;
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

    printf("Enter number to search : ");
    scanf("%d", &iValue);

    bRet = LinearSearch(Brr, iLength, iValue);

    if (bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present");
    }

    free(Brr);

    return 0;
}