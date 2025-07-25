// digit sepration in armas strong
#include <stdio.h>
int main()
{
    int n;

    printf("Enetr the Number :");
    scanf("%d", &n);

    while (n > 0)
    {
        int rem = n % 10;
        printf("%d   ", rem);
        n /= 10;
    }
    return 0;
}