#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int soma_intervalo(int a, int b)
{
 int soma = 0, i;
 
  {
    for(i = a+1; i< b; i++)
     {
       soma = soma + i;
     }
    return soma;
  }
}
int main()
{
 int a, b;
 printf("Informe dois valores maiores que 0, sendo o primeiro menor que o segundo:\n");
 scanf("%d %d", &a, &b);
 
 if(a>0 && b>0)
 	printf("O resultado da soma eh: %d", soma_intervalo(a,b));
 else
	printf("Valor invalido!");
 
 getch();
 return 0;
}
