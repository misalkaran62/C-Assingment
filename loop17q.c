// Write a program to find sum of odd numbers from 1 to N
#include <stdio.h>
void main()
{
    int i, n, sum;
    printf("Enter the Number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("Show the sum of odd number %d", sum);
}