///////////////////////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and disply below pattern.//
///////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////
// Input : iRow = 3  iCol = 4  //
/////////////////////////////////
// Output : 1 1 1 1            //
//          1 1 1 1            //
//          1 1 1 1            //
/////////////////////////////////

#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    for (iCnt1 = 01; iCnt1 <= iRow; iCnt1++)
    {
        for (iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            printf("%d ", iCnt1);
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