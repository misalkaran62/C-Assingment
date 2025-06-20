#include <stdio.h>
int main()
{
    int a, b;
    printf(" Enter the First Number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);

    if (a == b)
    {
        printf("%d is equal to %d ", a, b);
    }
    else if (a > b)
    {
        printf("%d is grater than %d", a, b);
    }
    else
    {
        printf("%d is less than %d", a, b);
    }
    return 0;
}