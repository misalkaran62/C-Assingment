// Write a program to print hello N times
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number in to Print:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\t hello ");
    }
    return 0;
}