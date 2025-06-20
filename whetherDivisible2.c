// divisible 5 and 7 using if
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        if (num % 7 == 0)
        {

            printf("The Number is divisible by both 5 and 7");
        }
        else
        {
            printf("The number is divisible by both 5 but not by 7");
        }
    }
    else
    {
        printf("The number is not divisible by 5");
    }
    return 0;
}
