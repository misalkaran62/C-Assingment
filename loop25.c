// Find the product(*) of all digits in a number.
#include <stdio.h>
void main()
{
    int number, product = 1;
    printf("Enter the Number to (into *):");
    scanf("%d", &number);
    while (number > 0)
    {
        product *= number % 10;
        number = number / 10;
    }
    printf("%d",product);
}