/*Accept the charcter from user. If character is samll display its corresponding
capital character, and it it is small then display its corresponding capital.
In other cases display as it is.

Input : Q
Ouptut : q

Input : d
Output : D

*/

#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n", ch + 32);   // Convert uppercase to lowercase
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c\n", ch - 32);   // Convert lowercase to uppercase
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