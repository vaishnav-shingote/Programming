#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Elements of array are : \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    // Step1 : Except the number of elements
    printf("Enter no of elements :\n");
    scanf("%d", &iLength);

    // Step2 : Allocate the memory
    Brr = (int *)malloc(iLength * sizeof(int));

    // Step3 : Accept the values from user
    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    // Step 4 : Use the memeory (LOGIC)
    Display(Brr, iLength);

    // Step 5 : Deallocate the memory
    free(Brr);

    return 0;
}