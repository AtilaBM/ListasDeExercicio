#include <stdio.h>

int main()
{
    int n, fat = 1;
    float e = 1, denominador;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Numero negativo, encerrando programa\n");
    }
    else
    {
        for (int i = 2; i <= n; i++)

        {
            fat *= i;
            denominador = 1.0 / fat;
            e += denominador;
        }
    }

    printf("O resultado é: %.8f\n", e);
}