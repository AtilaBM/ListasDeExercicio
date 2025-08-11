#include <stdio.h>

int main(){
    int n1,n2,n3,p1,p2,p3;

    printf("Ensira 3 numeros inteiros \n");
    printf("-------------------------\n");

    printf("Valor n1: ");
    scanf("%d",&n1);
    printf("Valor n2: ");
    scanf("%d",&n2);
    printf("Valor n3: ");
    scanf("%d",&n3);
    printf("-------------------------\n");
    printf("Valor p1: ");
    scanf("%d",&p1);
    printf("Valor p2: ");
    scanf("%d",&p2);
    printf("Valor p3: ");
    scanf("%d",&p3);

    float mediaPonderada = ((n1*p1)+(n2*p2)+(n3*p3))/(float)(p1+p2+p3);
    printf("-------------------------\n");

    printf("A media Ponderada dos 3 valores é %.2f \n",mediaPonderada);

    return 0;
}