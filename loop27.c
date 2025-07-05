// Check whether a number is a palindrome or not.
#include <stdio.h>
void main()
{
    int number, original, reverse = 0;
    printf("Enter the palindrome number:");
    scanf("%d", &number);
    original = number;
    while (number > 0)
    {
        reverse = reverse * 10 + (number % 10);
        number = number / 10;
    }
    if (original == reverse)
        printf("palindrome Number");
    else
        printf("Number is not palindrome");
}
