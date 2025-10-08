/*Faça um programa que preencha um vetor com dez números inteiros, calcule e mostre o vetor
resultante de uma ordenação decrescente.*/

#include <stdio.h>

#define TAM 10

void getNums(int vetor[]);
void ordena(int vetor[]);

int main()
{
    int vetor[TAM];

    getNums(vetor);
    ordena(vetor);

    return 0;
}

void getNums(int vetor[])
{
    for (int i = 0; i < TAM; i++)
    {
        printf("Valor %d do vetor:", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\nVetor nao ordenado [ ");
    for (int j = 0; j < TAM; j++)
    {
        printf("%d ", vetor[j]);
    }
    printf("]");
}

void ordena(int vetor[])
{
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            int aux = 0;
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nVetor decrescente [ ");
    for (int j = 0; j < TAM; j++)
    {
        printf("%d ", vetor[j]);
    }
    printf("]\n\n");
}