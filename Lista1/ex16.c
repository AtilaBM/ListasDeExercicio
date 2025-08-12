#include <stdio.h>

int main()
{
    int hoursWorked;
    float tax = 0.03, minimumWage;

    printf("Insert the values for hours worked and tax percentage\n");
    printf("-------------------------------\n");

    printf("Hours worked: ");
    scanf("%d", &hoursWorked);
    printf("Insert the minimum wage value: ");
    scanf("%f", &minimumWage);

    float hourValue = minimumWage / hoursWorked;
    float grossSalary = hoursWorked * hourValue;
    float taxValue = grossSalary * tax;
    float netSalary = grossSalary - taxValue;

    printf("the net salary is: $%.2f\n", netSalary);
    printf("-------------------------------\n");

    return 0;
}