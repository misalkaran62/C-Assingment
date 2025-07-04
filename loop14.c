//Write a program to print even numbers from x to y 
#include<stdio.h>
void main()
{
    int x,y,i;
    printf("Enter X Number:");
    scanf("%d",&x);
    printf("Enter Y Number:");
    scanf("%d",&y);
    for (i = x; i <=y; i++)
    {
        if (i%2==0)
        {
            printf("\t%d",i);
        }
        
    }
    
}
