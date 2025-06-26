// Write a program to find sum of 1 to N sum of first N numbers for loop
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the Number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of First %d no = \t %d ", n, sum);
    return 0;
}