// write the porogam even or odd ternary (conditionl)

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("The number is even") : printf("The number is odd");

    return 0;
    
}