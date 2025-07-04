// Write a program to print even numbers from 1 to 10 (or odd numbers)
#include <stdio.h>
int main()
{
    int  i;
    printf("Enter the Eeven Number:");
    //scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
        }
    }
    return 0;
}