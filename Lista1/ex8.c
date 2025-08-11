#include <stdio.h>

int main()
{
    int deposit;
    float tax;

    printf("Insert the values for Deposit and Interest rate.\n");
    printf("-------------------------\n");

    printf("Deposit: ");
    scanf("%d", &deposit);
    printf("Interest rate: ");
    scanf("%f", &tax);

    float taxValue = deposit * (tax / 100);
    float profit = deposit + taxValue;

    printf("-------------------------\n");

    printf("profit is $%.2f\n", taxValue);
    printf("Deposit with profit is $%.2f\n", profit);
    return 0;
}