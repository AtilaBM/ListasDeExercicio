#include <stdio.h>
int main()
{
    int codigo;
    float salario, novo_salario, aumento;
    printf("===============Insira seu salário=============== \n");
    printf("Salário: ");
    scanf("%f", &salario);
    printf("===============Escolha o código do seu cargo=============== \n");
    printf("1 - Escriturário\n");
    printf("2 - Secretário\n");
    printf("3 - Caixa\n");
    printf("4 - Gerente\n");
    printf("5 - Diretor\n\n");
    printf("Insira o código: ");
    scanf("%d", &codigo);
    printf("\n\n");
    switch (codigo)
    {
    case 1:
        aumento = salario * 0.5;
        novo_salario = salario + aumento;
        printf("Cargo: Escriturário\n");
        printf("Seu aumento salarial é R$%.2f\n", aumento);
        printf("Seu novo salário é R$%.2f\n", novo_salario);
        break;
    case 2:
        aumento = salario * 0.35;
        novo_salario = salario + aumento;
        printf("Cargo: Secretário\n");
        printf("Seu aumento salarial é R$%.2f\n", aumento);
        printf("Seu novo salário é R$%.2f\n", novo_salario);
        break;
    case 3:
        aumento = salario * 0.2;
        novo_salario = salario + aumento;
        printf("Cargo: Caixa\n");
        printf("Seu aumento salarial é R$%.2f\n", aumento);
        printf("Seu novo salário é R$%.2f\n", novo_salario);
        break;
    case 4:
        aumento = salario * 0.1;
        novo_salario = salario + aumento;
        printf("Cargo: Gerente\n");
        printf("Seu aumento salarial é R$%.2f\n", aumento);
        printf("Seu novo salário é R$%.2f\n", novo_salario);
        break;
    case 5:
        printf("Cargo: Diretor\n");
        printf("Você não recebe aumento salarial \n");
        printf("Seu salário permanece R$%.2f \n", salario);
        break;
    default:
        printf("CÓDIGO INVÁLIDO!\n");
        break;
    }

    return 0;

}