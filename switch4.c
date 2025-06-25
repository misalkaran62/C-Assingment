// Accept radius from the user and write a program having menu with the
// following options and corresponding actions
// Options
// 1: Area of Circle
// Compute area of circle and print
// 2: Circumference of Circle
// Compute circumference of circle and print
// 3: Volume of Sphere
// Compute volume of sphere and print
#include <stdio.h>
#define PI 3.14159
int main()
{
    int chioce;
    float radius, area, circumference, volume;

    printf("Enter the radius :");
    scanf("%f", &radius);

    printf("\n Menu :\n");
    printf("1: Area of Circle\n");
    printf("2: Circimference of Circle\n");
    printf("3: Volume of Sphere \n");
    printf("Enter Your Choice (1,2,or3):");
    scanf("%d", &chioce);

    switch (chioce)
    {
    case 1:
        area = PI * radius * radius;
        printf("Area of circle = %.2f", area);
        break;
    case 2:
        circumference = 2 * PI * radius;
        printf("Circumference of circle =%.2f", circumference);
        break;
case 3:
volume=(4.0/3.0)*PI*radius*radius*radius;
printf("volume of circle =%.2f",volume);
break;
    default:
printf("Invalid choice so choice 1,2,3 number");
    }
    return 0;
}