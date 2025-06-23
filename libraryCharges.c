#include <stdio.h>
int main()
{

    int days;
    float fine = 0;
    printf(" Enter of days :");
    scanf("%d",&days);
     
    if (days<=5)
    {
    fine=days*1;
    }
    else if 
        (days <=10)
        {
    fine=(5*1)+(days-5)*2;
    }
    else{
        fine =(5*1)+(5*2)+(days-10)*5;
    }

printf("Total fine is : Rs . %.2f",fine );
return 0;
    
}