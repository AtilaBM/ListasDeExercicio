/*Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo N e retorne o valor
de S, obtido pelo seguinte cálculo: (10)*/
/*
 * ====================================
 * Formula: S = 1 + 1/2! + 1/3! + ... + 1/N!
 * ====================================
 */

#include <stdio.h>

void serie_euler(int n);

int main()
{

    int n;

    printf("Insira o valor de N: ");
    scanf("%d", &n);
    serie_euler(n);

    return 0;
}

void serie_euler(int n)
{
    int fat = 1;
    float sum = 1.0, denominador;

    for (int i = 2; i <= n; i++)
    {
        fat *= i;
        denominador = 1.0 / fat;

        sum += denominador;
    }

    printf("O resultado é: %.8f\n", sum);
}
