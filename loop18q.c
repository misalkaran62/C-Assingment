// Write a program to find sum of odd numbers from x to y
#include <stdio.h>
void main()
{
    int i, x, y, sum;
    printf("Enter Odd X:");
    scanf("%d", &x);
    printf("Enter Odd Y:");
    scanf("%d", &y);
    sum = 0;
    for (i = x; i <= y; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("sum of odd number %d to %d is:%d", x, y, sum);
}