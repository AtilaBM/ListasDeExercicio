#include <stdio.h>

int main()
{
    float numero1, numero2;

    printf("Insira 2 números: \n");
    printf("===================\n");

    printf("Insira o número 1: ");
    scanf("%f", &numero1);

    printf("Insira o número 2: ");
    scanf("%f", &numero2);
    printf("===================\n");

    (numero1 > numero2) ? printf("%.2f é maior que %.2f\n", numero1, numero2)
                        : printf("%.2f é maior que %.2f\n", numero2, numero1);

    printf("===================\n");

    return 0;
}