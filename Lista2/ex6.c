#include <stdio.h>

int main()
{
    int numero;

    printf("Insira um número: \n");
    printf("===================\n");

    printf("Insira um número: ");
    scanf("%d", &numero);
    printf("===================\n");

    (numero % 2 == 0) ? printf("%d é par \n", numero)
                        : printf("%d é ímpar\n", numero);

    printf("===================\n");

    return 0;
}