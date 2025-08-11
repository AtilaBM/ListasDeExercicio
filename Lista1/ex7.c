#include <stdio.h>

int main()
{
    int salary, bonus = 50;
    float tax = 0.1;

    printf("Insert the value for salary.\n");
    printf("-------------------------\n");

    printf("salary: ");
    scanf("%d", &salary);

    float taxValue = salary * tax;
    float newSalary = (salary + bonus) - taxValue;
    printf("-------------------------\n");

    printf("The new salary with bonus: $50 and tax: 10%% is $%.2f \n", newSalary);
    return 0;
}