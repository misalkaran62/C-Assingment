// check whether given number is divisible by 5 and 7 with && operator
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 7 == 0)
    {
        printf("The number is divisible by both 5 and 7");
    }
    else
    {
        printf("The Number is Divisible by 5 both and 7");
    }

    return 0;
}
