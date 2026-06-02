// Accept on character from user and check whether that character is vowel(a, e, i, o, u) or not.

#include <stdio.h>
#include <ctype.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkValue(char cCharacter)
{
    if (cCharacter >= 'A' && cCharacter <= 'Z')
    {
        cCharacter = tolower(cCharacter);
    }
    if (cCharacter == 'a' || cCharacter == 'e' || cCharacter == 'i' || cCharacter == 'o' || cCharacter == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = chkValue(cValue);

    if (bRet)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("Is is not Vowel");
    }

    return 0;
}