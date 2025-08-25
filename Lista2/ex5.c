#include <stdio.h>

int main()
{
    float numero1, numero2, numero3, numero4, temp;

    printf("Insira 4 números (os 3 primeiros em ordem crescente, o último qualquer): \n");
    printf("===================\n");

    printf("Insira o número 1: ");
    scanf("%f", &numero1);

    printf("Insira o número 2: ");
    scanf("%f", &numero2);

    printf("Insira o número 3: ");
    scanf("%f", &numero3);

    printf("Insira o número 4: ");
    scanf("%f", &numero4);
    printf("===================\n");

    if (numero1 < numero2)
    {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }
    if (numero2 < numero3)
    {
        temp = numero2;
        numero2 = numero3;
        numero3 = temp;
    }
    if (numero3 < numero4)
    {
        temp = numero3;
        numero3 = numero4;
        numero4 = temp;
    }


     if (numero1 < numero2)
    {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }
    if (numero2 < numero3)
    {
        temp = numero2;
        numero2 = numero3;
        numero3 = temp;
    }
    if (numero1 < numero2)
    {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }
    printf("===================\n");
    printf("Em ordem decrescente: %.1f || %.1f || %.1f || %.1f\n", numero1, numero2, numero3, numero4);
    return 0;
}