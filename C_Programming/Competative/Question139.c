// Accept a program which accept string and display only digits from this string.
/*  Input: "Vai5hnav@123"
    Output : 5123
*/
#include <stdio.h>
#include<string.h>

void DisplayDigits(char *str)
{
    int i=0;
    for (i = 0; i < strlen(str); i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            printf("%d",str[i]);
        }
    }
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    DisplayDigits(arr);

    printf("Modified string is %s", arr);
}