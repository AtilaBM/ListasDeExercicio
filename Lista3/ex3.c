#include <stdio.h>

int main(){
    int n,i,j;

    printf("Insira a quantidade de vezes: ");
    scanf("%d",&n);

    i=1;
    j=4;

    for ( i; i <= n; i++ && j++)
    {
        printf("%d %d %d ",i,j,j);
    }
    
}