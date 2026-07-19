/*
Accept character from user. If it is capital tehn display all the character from
the input characters till z. If input character is small then print all the characters
in reverse order till a. In orther cases return dirdectly.

Input : Q
Output : Q R S T U V W X Y Z

Input : m
Output : m l k j i h g f e d c b a
*/

#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        while(ch<='Z')
        {
            printf("%c\t", ch);
            ch++;
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        while(ch>='a')
        {
            printf("%c\t", ch);
            ch--;
        }
    }
    else
    {
        printf("%c\n", ch);        // Display as it is
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}