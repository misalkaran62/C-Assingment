#include<stdio.h>
#include<math.h>
int main()
{
    int n, temp, cnt = 0;
    float result = 0;
    printf("Enter A number :");
    scanf("%d", &n);

    temp = n; // backup usge
    while (n > 0)
    {
        cnt++;
        n /=10;
    }
    n = temp;
    while (n > 0)
    {
        int rem = n % 10;
        result = result + pow(rem, cnt);
        n /= 10;
    }
    if (result == temp)
        printf("Number is Asrms Number ");
    else
        printf("Number is not arms number ");
    return 0;
}