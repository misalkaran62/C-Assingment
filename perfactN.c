// Perfact number 1 to 10000
#include <stdio.h>
void main()
{
    int i, n, sum;

    printf("Perfact Number in 1 to 10000:");
    scanf("%d", &n);
    for (n = 1; n <= 10000; n++)
    {
        sum = 0;
        for (i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        if (sum == n)
        {
            printf("%d\n", n);
        }
    }
}