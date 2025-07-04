// Write a program to print odd numbers from 1 to 10

#include <stdio.h>
void main()
{
    int i;
    printf("Show the odd number 1 to 10:");
    for (i = 1; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d",i);
        }
    }
}