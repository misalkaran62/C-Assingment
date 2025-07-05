// Accept a number and print all its digits (from first to last).
#include <stdio.h>
void main()
{
    int digit, number;
    printf("Enter the Number to first to last :");
    scanf("%d", &number);
    // first number reverse
    int revers= 0;
    while (number > 0)
    {
        revers = revers * 10 + (number % 10);
        number = number / 10;
    }
    // and second reversr number first to last
    while (revers > 0)
    {
        digit = revers % 10;
        printf("%d\t", digit);
        revers = revers / 10;
    }
}