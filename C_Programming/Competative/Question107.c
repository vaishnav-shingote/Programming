///////////////////////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and disply below pattern.//
///////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////
// Input : iRow = 4  iCol = 3  //
/////////////////////////////////
// Output : 1 2 3              //
//          1 2 3              //
//          1 2 3              //
/////////////////////////////////

#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    for (iCnt1 = 0; iCnt1 < iRow; iCnt1++)
    {
        for (iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            printf("%d ", iCnt2);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
}