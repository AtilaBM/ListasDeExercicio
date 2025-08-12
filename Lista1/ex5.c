#include <stdio.h>

int main()
{
    int salary;
    float adjustment;

    printf("Insert the values for salary and adjustment.\n");
    printf("-------------------------\n");

    printf("salary: ");
    scanf("%d", &salary);
    printf("Adjustment: ");
    scanf("%f", &adjustment);

    float adjustmentValue = salary * (adjustment / 100);
    float newSalary = salary + adjustmentValue;
    printf("-------------------------\n");

    printf("The adjustment value is: $%.2f\n", adjustmentValue);
    printf("The new salary is $%.2f \n", newSalary);

    return 0;
}