// Write a program to find sum of odd numbers from 1 to 10
#include <stdio.h>
void main()
{
    int i, sum;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of 1 to 10 odd number:%d", sum);
}