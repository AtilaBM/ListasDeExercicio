#include <stdio.h>

int main()
{
    float salary, salaryBonus, newSalary, schoolAssistance;

    printf("===============Insert your salary=============== \n");
    printf("Salary: ");
    scanf("%f", &salary);

    if (salary <= 600.00)
    {
        schoolAssistance = 150;
    }
    else
    {
        schoolAssistance = 100;
    }

    if (salary <= 500.00)
    {
        salaryBonus = salary * 0.05;
        newSalary = salary + salaryBonus + schoolAssistance;
        printf("Your new salary is $%.2f\n", newSalary);
    }
    else if (salary > 500.00 && salary <= 1200.00)
    {
        salaryBonus = salary * 0.12;

        newSalary = salary + salaryBonus + schoolAssistance;
        printf("Your new salary is $%.2f\n", newSalary);
    }
    else
    {

        newSalary = salary + schoolAssistance;

        printf("Your new salary is $%.2f\n", newSalary);
    }

    return 0;
}