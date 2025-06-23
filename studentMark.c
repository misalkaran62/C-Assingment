#include <stdio.h>
int main()
{
    int m1, m2, m3, total;
    float percentage;
    printf("Enter Mark Subject 1 : ");
    scanf("%d", &m1);

    printf("Enter Mark Subject 2 :");
    scanf("%d", &m2);

    printf("Enter Mark Subject 3 :");
    scanf("%d", &m3);

    total = m1 + m2 + m3;
    percentage = (total / 300.0) * 100;
    printf("Total Mark =%d\n ", total);
    printf("percentage =%.2f%%\n", percentage);

    if (percentage >= 60)
        printf(" class I \n");
    else if (percentage >= 50)
        printf("Class II \n");
    else if (percentage >= 35)
        printf("Pass Class \n");
    else
        printf("Fail \n");

    return 0;
}