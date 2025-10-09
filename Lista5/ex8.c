/*Faça um programa que, no momento de preencher um vetor com oito números inteiros, já os
armazene de forma crescente.*/

#include <stdio.h>

#define TAM 10

void getNums(int vetor[]);
void ordena(int vetor[]);

int main()
{
    int vetor[TAM];

    getNums(vetor);

    return 0;
}

void getNums(int vetor[])
{
    for (int i = 0; i < TAM; i++)
    {
        printf("Valor %d do vetor:", i + 1);
        scanf("%d", &vetor[i]);
        for (int j = 0; j < TAM; j++)
        {
            int aux = 0;
            if (vetor[i] < vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    printf("\nVetor ordenado na forma crescente [ ");
    for (int j = 0; j < TAM; j++)
    {
        printf("%d ", vetor[j]);
    }
    printf("]\n\n");
}
