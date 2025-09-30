/*
 * ========================================================================
 * Elabore uma sub-rotina que receba como parâmetro um valor inteiro e
 * positivo N (inteiro e maior ou igual a 1) e determine o valor da
 * sequência S, descrita a seguir:
 *
 * Fórmula:
 * S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n² + 1)/(n + 3)
 *
 * Parâmetro: n (int) - valor inteiro positivo >= 1
 * Retorno: s (float) - soma da sequência
 * ========================================================================
 */

#include <stdio.h>
#include <math.h>

void sequencia(int n);

int main()
{
   int n;

   printf("Insira valor de N: ");
   scanf("%d", &n);

   sequencia(n);
   return 0;
}

void sequencia(int n)
{
   float numerador, denominador;
   float s = 0, resul = 0;

   for (int i = 1; i <= n; i++)
   {
      numerador = pow(i, 2) + 1;
      denominador = i + 3;
      resul = numerador / denominador;
      s += resul;
   }
   printf("Resultado é %.2f\n", s);
}
