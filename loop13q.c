// Write a program to print odd numbers from 1 to N
#include <stdio.h>
void main()
{
    int n, i;
    printf("Show the odd nuber 1 to n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("\t%d", i);
        }
    }
}