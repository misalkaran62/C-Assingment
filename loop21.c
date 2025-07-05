// Write a program that accepts a number and print it’s all digits
#include <stdio.h>
void main()
{
    int digit, number;
    printf("Enter the number:");
    scanf("%d", &number);
    while (number > 0)
    {
        digit = number % 10;
        printf("\t%d", digit);
        number = number / 10;
    }
}