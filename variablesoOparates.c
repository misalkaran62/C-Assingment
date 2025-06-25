#include <stdio.h>
int main()
{
    int x, y, num,choice, temp;

    printf("Enter the Number X:");
    scanf("%d", &x);
    printf("Enter the Number Y :");
    scanf("%d", &y);

    printf("Options \n ");
    printf("1: Equality (x=y)");
    printf("2 \nless than (x<y> )");
    printf("3: \nQuotient and Remainder (x/y) ");
    printf("4: \nCheck  rang (x and y is between check)");
    printf("5: Swap x and y :\n");

    printf("Enter the choice :\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        if (x == y)
            printf("x is equal to y\n");
        else
            printf("x is not equal y \n");
        break;
    case 2:
        if (x < y)
            printf("x is less thay y\n");
        else
            printf("x in not less than y\n");
        break;
    case 3:
        if (y != 0)
        {
            printf("Quotient = %d\n", x / y);
            printf("Reminder = %d\n", x % y);
        }
        else
        {
            printf("Connot divide by zero\n");
        }
        break;
    case 4:
        printf("Enter the Number ti check range :");
        scanf("%d", &num);
        if ((num >= x && num <= y || num >= y && num >= x))
            printf("Number is lies between x and y inclusive\n");
        else
            printf("Numner is not lies between x and y \n");
        break;
    case 5:
        temp = x;
        x = y;
        y = temp;
        printf("After swapping\n");
        printf("x=%d ,y=%d\n", x, y);
        break;

    default:
        printf("Invalid Choice please a number between 1 to 5\n");
    }
    return 0;
}