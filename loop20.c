// Write a program to accept to integers x and n computer x^n
#include <stdio.h>
void main()
{
    int x, n, i;
    float result;
    printf("Enter the X:");
    scanf("%d", &x);
    printf("Enter the Number:");
    scanf("%d", &n);
    result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }
    printf("%d raised to the power %d is :%.2f", x, n, result);
}