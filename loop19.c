//Write a program to find factorial of N (N!)
#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("Enter the Factorial:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Factorial is not defined a negative number");
    }
    else{
    for ( i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    printf("Factorial f %d is :%d",n,fact);
    }
}