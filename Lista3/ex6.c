#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    system("clear");
    int n, sinal = 1, num;
    double fat, x, exp, resul = 0.0;

    printf("Ensira valor de x: ");
    scanf("%lf", &x);

    printf("Ensira a quantidade de vezes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        fat = 1;

        num = i * 2;
        printf("sinal %d \n", sinal);
        for (int j = 1; j <= num; j++)
        {
            fat *= j;
        }
        exp = (double)sinal * (pow(x, i * 2) / fat);
        resul += exp;
        sinal *= -1;
        // printf("fat de %d é %d e o sinal é %d \n", num, fat, sinal);
    }
    printf("O resultado do cosseno de %.2lf é: %lf\n",x, cos(x));
    printf("O resultado da serie de taylor é: %lf\n", resul);
}