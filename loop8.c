// Write a program to find sum of 1 to N sum of first N numbers without number
#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter the Number :");
    scanf("%d",&n);

    sum=(n*(n+1)/2);
    printf("Sum of First %d number =%d\n",n,sum);
    return 0;
}
