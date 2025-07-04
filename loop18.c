// Write a program to find sum of even numbers from x to y
#include <stdio.h>
void main()
{
    int x, y, i,sum;
    printf("Enter X :");
    scanf("%d", &x);
    printf("Enter Y :");
    scanf("%d", &y);
    sum=0;
    for ( i = x; i <=y; i++)
    {
        if (i%2==0)
        {
            sum=sum+i; 
        }
        
    }
    printf("Find the sum of %d to  %d is:%d",x,y,sum);
}