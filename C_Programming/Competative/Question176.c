/*
Write a program which accept one number and position from user and check whether
bit at that position is on or off. If bit is one return TRUE otherwise return FALSE.

Input : 10 2
Output : TRUE
*/

#include <stdio.h>
#include <stdbool.h>

bool ChkBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 1;

    iMask = iMask << (iPos - 1);

    return (iNo & iMask) != 0;
}

int main()
{
    unsigned int iNo = 0;
    int iPos = 0;
    bool bRet = false;

    printf("Enter the number: ");
    scanf("%u", &iNo);

    printf("Enter the position: ");
    scanf("%d", &iPos);

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid Position\n");
        return 0;
    }

    bRet = ChkBit(iNo, iPos);

    if(bRet)
    {
        printf("Bit at position %d is ON\n", iPos);
    }
    else
    {
        printf("Bit at position %d is OFF\n", iPos);
    }

    return 0;
}