//Qudrant programame

#include <stdio.h>
int main()
{
    int x, y;

    printf("Enter the Quadrant (x,y) :");
    scanf("%d%d", &x, &y);

    if (x > 0 && y > 0)
        printf("The point in lies of quadrant 1 \n");
    else if (x < 0 && y > 0)
        printf("The point in lies of quadrant 2 \n");
    else if (x < 0 && y < 0)
        printf("The point in lies in quadrant 3 \n");
    else if (x > 0 && y < 0)
        printf("The point in lies in quadrant 4 \n");
    else if (x == 0 && y == 0)
        printf(" The point in lies in  origin \n");
    else if (x == 0)
        printf("The point in lies in y-axis");
    else if (y == 0)
        printf("The in lies in x-axis");

    return 0;
}