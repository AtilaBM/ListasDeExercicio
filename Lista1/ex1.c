#include <stdio.h>

int main(){
    int n1,n2,n3,n4,soma;

    printf("Ensira 4 numeros inteiros \n");

    printf("Valor n1: ");
    scanf("%d",&n1);
    printf("Valor n2: ");
    scanf("%d",&n2);
    printf("Valor n3: ");
    scanf("%d",&n3);
    printf("Valor n4: ");
    scanf("%d",&n4);

    soma = n1+n2+n3+n4;

    printf("O total da soma dos 4 valores é %d \n",soma);

    return 0;


}