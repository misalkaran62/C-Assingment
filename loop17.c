// Write a program to find sum of even numbers from 1 to N
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("Enter the number N:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of even Number 1 to n %d", sum);
}