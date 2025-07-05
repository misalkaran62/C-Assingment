// Accept a number and print all its digits (from first to last).
#include <stdio.h>
void main()
{
    int digit, number;
    printf("Enter the Number to first to last :");
    scanf("%d", &number);
    // first number reverse
    int rev = 0;
    while (number > 0)
    {
        rev = rev * 10 + (number % 10);
        number = number / 10;
    }
    // and second reversr number first to last
    while (rev > 0)
    {
        digit = rev % 10;
        printf("%d\t", digit);
        rev = rev / 10;
    }
}