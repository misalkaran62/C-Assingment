#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("The number is divisible by 5 ");
    }
    else if (num % 7 == 0)
    {
        printf("The number is divisible by 7");
    }
    else
    {
        printf("The Number is not divisible by 5 or 7");
    }
    return 0;
}
