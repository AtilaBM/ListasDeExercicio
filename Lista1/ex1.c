#include <stdio.h>

int main(){
    float n1,n2,n3,n4,soma;

    printf("Ensira 4 numeros inteiros \n");

    printf("Valor n1: ");
    scanf("%f",&n1);
    printf("Valor n2: ");
    scanf("%f",&n2);
    printf("Valor n3: ");
    scanf("%f",&n3);
    printf("Valor n4: ");
    scanf("%f",&n4);

    soma = n1+n2+n3+n4;

    printf("O total da soma dos 4 valores é %f \n",soma);

    return 0;


}