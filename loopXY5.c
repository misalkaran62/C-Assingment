//Write a program to print x to y (both inclusive) 
#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter Starting Number (X):");
    scanf("%d",&x);
    printf("Enter Ending Number (Y):");
    scanf("%d",&y);

    for (i = x; i <=y; i++)
    {
        printf("%d\t",i);
    }
    return 0;
}