#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{

     int n, count;
     float k;

     printf("Ensira o valor desejado: ");
     scanf("%d", &n);

     count = 12;
     k = 1;

     for (int i = 1; i <= count; i++)
     {
          k = (k + (n / k)) / 2;
          printf("O resultado é %.2f\n", k);
     }
     printf("Raiz de %d é %.2f\n", n, sqrt(n));
}