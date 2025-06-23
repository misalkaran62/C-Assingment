#include <stdio.h>
int main()
{
    char ch;

    printf("Enter the Character : ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("Upppercase letter %c \n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("lowercase letter %c\n", ch);
    }
    else
    {
        printf("Not An alphabet letter .\n");
    }
    return 0;
}