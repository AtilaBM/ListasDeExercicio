#include <stdio.h>

int main(){
    float n1,n2,n3;

    printf("Ensira 3 notas \n");

    printf("Valor n1: ");
    scanf("%f",&n1);
    printf("Valor n2: ");
    scanf("%f",&n2);
    printf("Valor n3: ");
    scanf("%f",&n3);

    float media = (n1+n2+n3)/3;

    printf("A media dos 3 valores e %.2f \n",media);

    return 0;
}