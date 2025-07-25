#include<stdio.h>
void main()
{
    int row,num;
    for (row = 1; row <= 5; row++)
    {
        for (num = 5; num >=(6-row); --num)
        {
            printf("%d",num);
        }
        printf("\n");
    }
    
}