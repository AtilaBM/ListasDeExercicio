#include <stdio.h>

int main()
{
    int code;
    float salary, newSalary;

    printf("===============Choose a code=============== \n");

    printf("1 - Taxes\n");
    printf("2 - New Salary\n");
    printf("3 - Category\n");
    printf("Insert the code: ");
    scanf("%d", &code);
    printf("\n\n");

    switch (code)
    {
    case 1:
        printf("===============Insert your salary=============== \n");
        printf("Salary: ");
        scanf("%f", &salary);

        if (salary < 500.00)
        {
            salary = salary - (salary * 0.05);
            printf("Your salary after tax is $%.2f\n", salary);
        }
        else if (salary >= 500.00 && salary <= 850.00)
        {
            salary = salary - (salary * 0.1);

            printf("Your salary after tax is $%.2f\n", salary);
        }
        else
        {
            printf("Your salary after tax is $%.2f\n", salary - (salary * 0.15));
        }

        break;
    case 2:
        printf("===============Insert your salary=============== \n");
        printf("Salary: ");
        scanf("%f", &salary);

        if (salary > 1500.00)
        {
            printf("Your new salary is $%.2f\n", salary + 25);
        }
        else if (salary > 750.00 && salary <= 1500.00)
        {

            printf("Your new salary is $%.2f\n", salary + 50);
        }
        else if (salary >= 450.00 && salary <= 750.00)
        {
            printf("Your new salary is $%.2f\n", salary + 75);
        }
        else
        {
            printf("Your new salary is $%.2f\n", salary + 100);
        }
        break;

    case 3:
        printf("===============Insert your salary=============== \n");
        printf("Salary: ");
        scanf("%f", &salary);

        if (salary <= 700.00)
        {
            printf("Category: Underpaid\n");
        }
        else
        {
            printf("Category: Well paid\n");
        }

        break;

    default:
        printf("INVALID CODE!\n");
        break;
    }
    printf("\n");

    return 0;

}