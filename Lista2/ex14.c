#include <stdio.h>

int main()
{
    float salario, salario_bonus, novo_salario, auxilio_escolar;

    printf("===============Insira seu salário=============== \n");
    printf("Salário: ");
    scanf("%f", &salario);

    if (salario <= 600.00)
    {
        auxilio_escolar = 150;
    }
    else
    {
        auxilio_escolar = 100;
    }

    if (salario <= 500.00)
    {
        salario_bonus = salario * 0.05;
        novo_salario = salario + salario_bonus + auxilio_escolar;
        printf("Seu novo salário é R$%.2f\n", novo_salario);
    }
    else if (salario > 500.00 && salario <= 1200.00)
    {
        salario_bonus = salario * 0.12;

        novo_salario = salario + salario_bonus + auxilio_escolar;
        printf("Seu novo salário é R$%.2f\n", novo_salario);
    }
    else
    {

        novo_salario = salario + auxilio_escolar;

        printf("Seu novo salário é R$%.2f\n", novo_salario);
    }

    return 0;
}