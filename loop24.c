// Find the sum of all digits in a number.
#include <stdio.h>
void main()
{
    int number, sum = 0;
    printf("Enter the Number to sum:");
    scanf("%d", &number);
    while (number > 0)
    {
        sum += number % 10;
        number=number/10;
    }
    printf("%d",sum);
}
