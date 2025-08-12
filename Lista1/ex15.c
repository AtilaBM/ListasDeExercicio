#include <stdio.h>

int main()
{
    float factoryPrice, tax, profit;

    printf("Insert the values for factory price, profit percentage and tax percentage\n");
    printf("---------------------------\n");

    printf("Insert the factory price: ");
    scanf("%f", &factoryPrice);
    printf("Insert the profit percentage: ");
    scanf("%f", &profit);
    printf("Insert the tax percentage: ");
    scanf("%f", &tax);
    printf("---------------------------\n");

    float finalTax = factoryPrice * (tax / 100);
    float finalProfit = factoryPrice * (profit / 100);
    float finalPrice = factoryPrice + finalTax + finalProfit;

    printf("The distributor's profit is: $%.2f\n", finalProfit);
    printf("The tax value is: $%.2f\n", finalTax);
    printf("The car's final price is: $%.2f\n", finalPrice);
    printf("---------------------------\n");
    return 0;
}