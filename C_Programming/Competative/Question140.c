// Accept a program which accept string and calculate the no of white spaces.
/*  Input: "Vaishnav Dnyandeo Shingote "
    Output : 2
*/

#include<stdio.h>
#include<string.h>

int CountWhite(char *str)
{
    int i = 0;
    int iCount = 0;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]== " ");
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);
}