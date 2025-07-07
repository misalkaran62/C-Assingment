// program which accepts a number and display each digit of number in words.
#include <stdio.h>
int main()
{
    int reverse, temp, digit, number;
    printf("Enter to the number to covert number to words:");
    scanf("%d", &number);
    if (number == 0)
    {
        printf("Zero\n");
        return 0;
    }

    // reverse the number first
    reverse = 0;
    temp = number;
    while (temp > 0)
    {
        reverse = reverse * 10 + (temp % 10);
        temp = temp / 10;
    }
    // and second number in words convert
    while (reverse > 0)
    {
        digit = reverse % 10;
        switch (digit)
        {
        case 0:
            printf("\tZero");
            break;
        case 1:
            printf("\tOne");
            break;
        case 2:
            printf("\tTwo");
            break;
        case 3:
            printf("\tThree");
            break;
        case 4:
            printf("\tFour");
            break;
        case 5:
            printf("\tFive");
            break;
        case 6:
            printf("\tSix");
            break;
        case 7:
            printf("\tSeven");
            break;
        case 8:
            printf("\tEight");
            break;
        case 9:
            printf("\tNine");
            break;
        default:
            break;
        }
        reverse = reverse / 10;
    }
    printf("\n");
}