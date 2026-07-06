// Accept number of rows and number of columns from user and display below pattern.
/*
Input : iRow = 4    iCol = 4
Output :
        a   b   c   d   e
        1   2   3   4   5
        a   b   c   d   e
        1   2   3   4   5
        a   b   c   d   e
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt1 = '\0', iCnt2 = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, iCnt1 = 'a', iCnt2 = 1; j <= iCol; j++, iCnt1++, iCnt2++)
        {
            if (i % 2 == 0)
            {
                printf("%d\t", iCnt2);
            }
            else
            {
                printf("%c\t", iCnt1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}