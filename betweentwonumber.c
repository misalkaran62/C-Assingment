#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the First number :");
    scanf("%d",&a);

    printf("Enter the second number :");
    scanf("%d",&b);

    printf("Enter the third number :");
    scanf("%d",&c);

    if ((a>b && a<c )|| a>c && a<b)
    {
        printf("%d is between %d and %d \n ",a,b,c);
    }
    else{
        printf("%d is Not between %d and %d \n",a,b,c);

    }
    return 0;
}