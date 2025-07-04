// Write a program to print even numbers from 100 to 150 (or numbers)
#include <stdio.h>
void main()
{
    int i;
    printf("Find the eevn number 100 to 150:");
    for (i = 100; i <= 150; i++)
    {
        if (i % 2 == 0)
        {
            printf("\t%d", i);
        }
    }
}
