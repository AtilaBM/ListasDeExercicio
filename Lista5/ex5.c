/*Faça um programa que preencha dois vetores de dez elementos numéricos cada um e mostre o
vetor resultante da intercalação.*/

#include <stdio.h>

void getVet(int vet1[], int vet2[]);
void intercala(int vet1[], int vet2[]);

int main()
{

    int vet1[10],
        vet2[10];

    getVet(vet1, vet2);
    intercala(vet1, vet2);

    return 0;
}

void getVet(int vet1[], int vet2[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Valor %d do vetor 1: ", i + 1);
        scanf("%d", &vet1[i]);
    }
    printf("\n\n");

    for (int j = 0; j < 10; j++)
    {
        printf("Valor %d do vetor 2: ", j + 1);
        scanf("%d", &vet2[j]);
    }
}

void intercala(int vet1[], int vet2[])
{
    int count = 0,
        vetAux[20];

    for (int i = 0; i < 10; i++)
    {
        vetAux[count] = vet1[i];
        vetAux[count + 1] = vet2[i];
        count += 2;
    }

    printf("\nVetor intercalado [ ");
    for (int j = 0; j < 20; j++)
    {
        printf("%d ", vetAux[j]);
    }
    printf("]\n\n");
}