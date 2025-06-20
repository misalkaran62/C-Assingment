//write programe even or odd in ifelse

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("using if: The number is even");
    }
    else
    {
        printf("using if: The Number is edd");
    }
    return 0;
}