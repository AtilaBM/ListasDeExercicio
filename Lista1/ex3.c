#include <stdio.h>

int main(){
    float n1,n2,n3,p1,p2,p3;

    printf("Ensira 3 notas \n");
    printf("-------------------------\n");

    printf("Valor n1: ");
    scanf("%f",&n1);
    printf("Valor n2: ");
    scanf("%f",&n2);
    printf("Valor n3: ");
    scanf("%f",&n3);
    printf("-------------------------\n");
    printf("Valor p1: ");
    scanf("%f",&p1);
    printf("Valor p2: ");
    scanf("%f",&p2);
    printf("Valor p3: ");
    scanf("%f",&p3);

    float mediaPonderada = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
    printf("-------------------------\n");

    printf("A media Ponderada dos 3 valores é %.2f \n",mediaPonderada);

    return 0;
}