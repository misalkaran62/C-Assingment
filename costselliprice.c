#include <stdio.h>
int main()
{
    float costprice, sellingprice, amount;
    printf("Enter the costPrice :");
    scanf("%f", &costprice);

    printf("\nEnter the selling price:");
    scanf("%f", &sellingprice);
    if (sellingprice > costprice)
    {
        amount = sellingprice - costprice;
        printf("Profit of %.2f", amount);
    }
    else if (costprice > sellingprice)
    {
        amount = costprice - sellingprice;
        printf("loss of %.2f", amount);
    }
    else
    {
        printf("no profit,no loss");
    }
    return 0;
}
