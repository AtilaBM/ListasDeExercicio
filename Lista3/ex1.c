#include <stdio.h>

int main()
{
    float salario = 10.00, aumento = 0.015;

    salario = salario + (salario * aumento);
    printf("2006: %.2f%% - Salário: R$%.2f\n", aumento * 100, salario);

    for (int i = 2007; i < 2025; i++)
    {
        aumento *= 2;
        salario =  salario + (salario * aumento);
    }
    printf("\nSalário atual em 2025: R$%.2f\n", salario);
    return 0;
}