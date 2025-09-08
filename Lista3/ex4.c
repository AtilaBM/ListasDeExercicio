#include <stdio.h>

int main()
{
    int n;

    printf("Insira a quantidade de numeros: ");
    scanf("%d", &n);

    int numeros[n];
    for (int i = 0; i < n; i++)
    {
        printf("Ensira um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("\n============================\n");
    printf("|  Valor  |   Fatorial    |\n");
    printf("============================\n");

    for (int i = 0; i < n; i++)
    {
        int fat = 1;
        for (int j = 1; j <= numeros[i]; j++)
        {
            fat *= j;
        }
        printf("|   %-5d|   %-10d|\n", numeros[i], fat);
    }

    printf("============================\n");

    return 0;
}
