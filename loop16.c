// Write a program to find sum of even numbers from 100 to 200
#include <stdio.h>
void main()
{
    int i, sum;
    sum = 0;
    for (i = 100; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of Number 100 to 200:%d", sum);
}