// Write a program to print odd numbers from 100 to 150
#include <stdio.h>
void main()
{
    int i;
    printf("Show the odd Number 100 to 150:");
    for (i = 100; i <= 150; i++)
    {
        if (i % 2 != 0)
        {
            printf("\t%d",i);
        }
    }
}