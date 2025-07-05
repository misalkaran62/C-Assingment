// Reverse the digits of a number.
#include <stdio.h>
void main()
{
    int number;
    printf("Enter the Reverse number :");
    scanf("%d", &number);
    int reverse = 0;
    while (number > 0)
    {
        reverse = reverse * 10 + (number % 10);
        number = number / 10;
        }
        printf("%d",reverse);
}