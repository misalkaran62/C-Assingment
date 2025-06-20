// OR Operater

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);

    if (num % 5 == 0 || num % 7 == 0)
    {
        printf("The number is divisible by 5 or 7");
    }
    else
    {
        printf("The number is Not divisible by 5 or 7");
    }
    return 0;
}