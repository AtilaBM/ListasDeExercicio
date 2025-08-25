#include <stdio.h>

int main()
{
    float numero1, numero2, numero3, temp;

    printf("Insira 3 números: \n");
    printf("===================\n");

    printf("Insira o número 1: ");
    scanf("%f", &numero1);

    printf("Insira o número 2: ");
    scanf("%f", &numero2);

    printf("Insira o número 3: ");
    scanf("%f", &numero3);
    printf("===================\n");

    if (numero1 > numero2)
    {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }
    if (numero2 > numero3)
    {
        temp = numero2;
        numero2 = numero3;
        numero3 = temp;
    }
    if (numero1 > numero2)
    {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }
    printf("===================\n");
    printf("Em ordem crescente: %.1f || %.1f || %.1f\n", numero1, numero2, numero3);
    return 0;
}