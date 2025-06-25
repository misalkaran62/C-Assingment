//count of digit number 

#include<stdio.h>
int main()
{
    int cnt=0,n;
    printf("Enter a Number");
    scanf("%d",&n);
    while (n>0)
    {
        cnt++;
        n=n/10;
    }
    printf("Count Of Digit is %d",cnt);
    return 0;
}