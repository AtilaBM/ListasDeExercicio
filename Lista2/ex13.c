#include <stdio.h>

int main()
{
    int codigo;
    float salario, novo_salario;

    printf("===============Escolha um código=============== \n");

    printf("1 - Impostos\n");
    printf("2 - Novo Salário\n");
    printf("3 - Categoria\n");
    printf("Insira o código: ");
    scanf("%d", &codigo);
    printf("\n\n");

    switch (codigo)
    {
    case 1:
        printf("===============Insira seu salário=============== \n");
        printf("Salário: ");
        scanf("%f", &salario);

        if (salario < 500.00)
        {
            salario = salario - (salario * 0.05);
            printf("Seu salário após imposto é R$%.2f\n", salario);
        }
        else if (salario >= 500.00 && salario <= 850.00)
        {
            salario = salario - (salario * 0.1);

            printf("Seu salário após imposto é R$%.2f\n", salario);
        }
        else
        {
            printf("Seu salário após imposto é R$%.2f\n", salario - (salario * 0.15));
        }

        break;
    case 2:
        printf("===============Insira seu salário=============== \n");
        printf("Salário: ");
        scanf("%f", &salario);

        if (salario > 1500.00)
        {
            printf("Seu novo salário é R$%.2f\n", salario + 25);
        }
        else if (salario > 750.00 && salario <= 1500.00)
        {

            printf("Seu novo salário é R$%.2f\n", salario + 50);
        }
        else if (salario >= 450.00 && salario <= 750.00)
        {
            printf("Seu novo salário é R$%.2f\n", salario + 75);
        }
        else
        {
            printf("Seu novo salário é R$%.2f\n", salario + 100);
        }
        break;

    case 3:
        printf("===============Insira seu salário=============== \n");
        printf("Salário: ");
        scanf("%f", &salario);

        if (salario <= 700.00)
        {
            printf("Categoria: Mal remunerado\n");
        }
        else
        {
            printf("Categoria: Bem remunerado\n");
        }

        break;

    default:
        printf("CÓDIGO INVÁLIDO!\n");
        break;
    }
    printf("\n");

    return 0;

}