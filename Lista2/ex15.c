#include <stdio.h>

int main()
{

    int horasTrabalhadas, horasExtras, dependentes, bonus;
    float salario, salarioMinimo, irrf, salarioLiquido, valorDependentes, valorHorasExtras, salarioBruto;

    printf("=================Insira os valores para Salário Mínimo, Horas Trabalhadas, Horas Extras e Dependentes.\n");
    printf("Salário Mínimo: ");
    scanf("%f", &salarioMinimo);
    printf("Horas Trabalhadas: ");
    scanf("%d", &horasTrabalhadas);
    printf("Horas Extras: ");
    scanf("%d", &horasExtras);
    printf("Dependentes: ");
    scanf("%d", &dependentes);

    float valorHora = salarioMinimo * 0.2;

    salario = horasTrabalhadas * valorHora;

    valorDependentes = dependentes * 32;

    valorHorasExtras = horasExtras * (valorHora + (valorHora * 0.5));

    salarioBruto = salario + valorDependentes + valorHorasExtras;

    if (salarioBruto < 200.00)
    {
        irrf = 0;
        salarioLiquido = salarioBruto - (salarioBruto * irrf);
    }
    else if (salarioBruto >= 200.00 && salarioBruto <= 500.00)
    {
        irrf = 0.1;
        salarioLiquido = salarioBruto - (salarioBruto * irrf);
    }
    else
    {
        irrf = 0.2;
        salarioLiquido = salarioBruto - (salarioBruto * irrf);
    }

    if (salarioLiquido <= 350.00)
    {
        bonus = 100;
    }
    else
    {
        bonus = 50;
    }

    printf("Seu salário líquido é R$%.2f\n", salarioLiquido);

    return 0;
}