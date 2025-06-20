#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the Firat number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    printf("Enter the third number :");
    scanf("%d", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }

    return 0;
}