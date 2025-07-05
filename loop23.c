// Count the number of digits in a given number.
#include <stdio.h>
void main()
{
    int  number;
    printf("Enter to the count number:");
    scanf("%d", &number);
    int count = 0;
    while (number > 0)
    {
        count++;
        number = number / 10;
    }
    printf("%d",count);
}