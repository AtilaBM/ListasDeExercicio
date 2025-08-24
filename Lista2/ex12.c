#include <stdio.h>
int main()
{
    int code;
    float salary, newSalary, increase;
    printf("===============Insert your salary=============== \n");
    printf("Salary: ");
    scanf("%f", &salary);
    printf("===============Choose your job code=============== \n");
    printf("1 - Escriturario\n");
    printf("2 - Secretario\n");
    printf("3 - Caixa\n");
    printf("4 - Gerente\n");
    printf("5 - Diretor\n\n");
    printf("Insert the code: ");
    scanf("%d", &code);
    printf("\n\n");
    switch (code)
    {
    case 1:
        increase = salary * 0.5;
        newSalary = salary + increase;
        printf("Position: Escriturario\n");
        printf("Your wage increase is $%.2f\n", increase);
        printf("Your new salary is $%.2f\n", newSalary);
        // 50
        break;
    case 2:
        increase = salary * 0.35;
        newSalary = salary + increase;
        printf("Position: Secretario\n");
        printf("Your wage increase is $%.2f\n", increase);
        printf("Your new salary is $%.2f\n", newSalary);
        break;
    case 3:
        increase = salary * 0.2;
        newSalary = salary + increase;
        printf("Position: Caixa\n");
        printf("Your wage increase is $%.2f\n", increase);
        printf("Your new salary is $%.2f\n", newSalary);
        break;
    case 4:
        increase = salary * 0.1;
        newSalary = salary + increase;
        printf("Position: Gerente\n");
        printf("Your wage increase is $%.2f\n", increase);
        printf("Your new salary is $%.2f\n", newSalary);
        break;
    case 5:
        printf("Position: Diretor\n");
        printf("You don't receive a wage increase \n");
        printf("Your salary is still $%.2f \n", salary);
        break;
    default:
        printf("INVALID CODE!\n");
        break;
    }

    return 0;

}