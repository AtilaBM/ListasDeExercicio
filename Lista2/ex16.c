#include <stdio.h>

int main()
{
    float currentPrice, monthlyAverageSales, increase, newPrice;

    printf("===Insert the values for current price and monthly average sales===\n");

    printf("Current Price: ");
    scanf("%f", &currentPrice);

    printf("Monthly average sales: ");
    scanf("%f", &monthlyAverageSales);

    if (monthlyAverageSales < 500 && currentPrice < 30.00)
    {
        increase = 0.1;
        newPrice = currentPrice + (currentPrice * increase);
        printf("The new price is $%.2f\n", newPrice);
    }
    else if ((monthlyAverageSales >= 500 && monthlyAverageSales < 1200) && (currentPrice >= 30.00 && currentPrice < 80.00))
    {
        increase = 0.15;
        newPrice = currentPrice + (currentPrice * increase);
        printf("The new price is $%.2f\n", newPrice);
    }
    else
    {
        float decrease = 0.2;
        newPrice = currentPrice - (currentPrice * decrease);
        printf("The new price is $%.2f\n", newPrice);
    }

    return 0;
}