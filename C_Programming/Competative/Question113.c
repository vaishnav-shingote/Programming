// Accept number of rows and number of columns from user and display below pattern.
/*
Input : iRow = 4    iCol = 4
Output :
         A  B   C   D
         a  b   c   d
         A  B   C   D
         a  b   c   d
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt1 = '\0', iCnt2 = '\0';
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, iCnt1 = 'A', iCnt2 = 'a'; j <= iCol; iCnt1++, iCnt2++, j++)
        {
            if (i % 2 == 0)
            {
                printf("%c\t", iCnt2);
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