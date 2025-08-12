#include <stdio.h>

int main()
{

    float salary, cpmf = 0.0038, cheque1, cheque2, accountBalance = 0;

    printf("Insert the values for salary and cheques\n");
    printf("-------------------------------\n");
    printf("Account Balance: $%.2f\n\n", accountBalance);
    printf("Insert the salary value: ");
    scanf("%f", &salary);
    printf("Insert the cheque 1 value: ");
    scanf("%f", &cheque1);
    printf("Insert the cheque 2 value: ");
    scanf("%f", &cheque2);

    accountBalance = salary;
    float withdraw1 = cheque1 + (cheque1 * cpmf);
    float withdraw2 = cheque2 + (cheque2 * cpmf);
    accountBalance = accountBalance - withdraw1 - withdraw2;

    printf("-------------------------------\n");
    printf("Account Balance: $%.2f\n", accountBalance);
    printf("-------------------------------\n");
    return 0;
}