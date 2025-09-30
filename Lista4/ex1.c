#include <stdio.h>

int binar(int a)
 {
    int resp;
    if (a > 0)
        resp = 1;
    else 
        resp = 0;
    return resp;
 }
int main()
{
  int a;
  do
   {
      printf("Digite um valor inteiro: ");
      scanf("%d", &a);
    
   }while(a == 0);
   
  printf("\n  %d\n", binar(a));
  return 0;
}
