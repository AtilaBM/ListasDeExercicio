#include <stdio.h>
#include <math.h>

int main()
{
    int opcao;

    printf("========Escolha uma opção=========\n");

    printf("Opção 1: Somar dois números \n");
    printf("Opção 2: Raiz quadrada \n");
    printf("======================================\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    printf("======================================\n");

    switch (opcao)
    {
    case 1:
        float numero1, numero2;

        printf("Insira o primeiro número: ");
        scanf("%f", &numero1);
        printf("Insira o segundo número: ");
        scanf("%f", &numero2);

        printf("A soma é: %.2f \n", numero1 + numero2);
        break;

    case 2:
        float numero;

        printf("Insira um número: ");
        scanf("%f", &numero);
        printf("A raiz quadrada é : %.2f \n", sqrt(numero));

        break;

    default:
        printf("OPÇÃO INVÁLIDA!\n");
        break;
    }
}