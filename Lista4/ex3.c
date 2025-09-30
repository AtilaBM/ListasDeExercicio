#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int st(int a, int b, int c)
 {
  int aux, i, div, soma = 0;
    if(b > c)
     {
        aux = b;
        b = c;
        c = aux;
     }
    if(a > 1)
     {
       for(i = b; i <= c ;i++)
       {
          aux = i%a;
          if(aux == 0)
	   {
              soma = soma + i;
            }
       }
     }
  return soma;
 }
int main()
{
  int a, b, c;
  
  do{
     printf("Informe tres valores inteiros \n");
     scanf("%d %d %d", &a , &b, &c);
     if (a < 1){
     	printf ("O valor de a deve ser maior do que 1, digite novamente a");
     	scanf("%d", &a);
		}
  	}while (a < 1);
  
  //somatorio = st(a, b, c);
  //printf("A soma e = %d", somatorio);
  printf("A soma e = %d", st(a, b, c));
  getch();
  return 0;
}
    
