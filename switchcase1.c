// accepts two integers and an operator character (+ - * /)
#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    printf("Enter First Number :");
    scanf("%d", &num1);
    printf("Enter second Number :");
    scanf("%d", &num2);
    printf("Enter the oprater(+,-,*,/) :");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("Result= %d", num1 + num2);
        break;
    case '-':
        printf("Result = %d", num1 - num2);
        break;
    case '*':
        printf("Result = %d", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf(" Reslut = %d ", num1 / num2);
        }
        else
        {
            printf(" Error Division by zero \n ");
        }
        break;

    default:
        printf("invalid Operator Enter the +,-,* ,or/ \n");
    }
    return 0;
}