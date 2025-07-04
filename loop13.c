// Write a program to print even numbers from 1 to N
#include <stdio.h>
void main()
{
    int i, n;
    printf("Show the even number 1 to n:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
        }
    }
}