// Write a program to find sum of even numbers from 1 to 10
#include <stdio.h>
void main()
{
    int n, i, sum;
    sum=0;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Enter the even number to adition %d\n1 to 10:",sum);
}