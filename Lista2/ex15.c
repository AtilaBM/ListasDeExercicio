#include <stdio.h>

int main()
{

    int hoursWorked, overtime, depedents, bonus;
    float salary, minimumWage, irrf, netSalary, depedentsValue, overtimeValue, grossSalary;

    printf("=================Insert the values for Minimum wage, Hours Worked, Overtime and depedents.\n");
    printf("Minimum Wage: ");
    scanf("%f", &minimumWage);
    printf("Hours Worked: ");
    scanf("%d", &hoursWorked);
    printf("Overtime: ");
    scanf("%d", &overtime);
    printf("Depedents: ");
    scanf("%d", &depedents);

    float hourValue = minimumWage * 0.2;

    salary = hoursWorked * hourValue;

    depedentsValue = depedents * 32;

    overtimeValue = hourValue + (hourValue * 0.5);

    grossSalary = salary + depedentsValue + overtimeValue;

    if (grossSalary < 200.00)
    {
        irrf = 0;
        netSalary = grossSalary - (grossSalary * irrf);
    }
    else if (grossSalary >= 200.00 && grossSalary <= 500.00)
    {
        irrf = 0.1;
        netSalary = grossSalary - (grossSalary * irrf);
    }
    else
    {
        irrf = 0.2;
        netSalary = grossSalary - (grossSalary * irrf);
    }

    if (netSalary <= 350.00)
    {
        bonus = 100;
    }
    else
    {
        bonus = 50;
    }

    printf("Your net salary is $%.2f\n", netSalary);

    return 0;
}