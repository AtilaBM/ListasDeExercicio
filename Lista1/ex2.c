#include <stdio.h>

int main(){
    int n1,n2,n3;

    printf("Ensira 3 numeros inteiros \n");

    printf("Valor n1: ");
    scanf("%d",&n1);
    printf("Valor n2: ");
    scanf("%d",&n2);
    printf("Valor n3: ");
    scanf("%d",&n3);

    float media = (float)(n1+n2+n3)/3;

    printf("A media dos 3 valores é %.2f \n",media);

    return 0;
}