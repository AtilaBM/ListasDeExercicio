/*Faça um programa que preencha dois vetores com cinco elementos numéricos cada e depois
ordene-os de maneira crescente. Deverá ser gerado um terceiro vetor com dez posições,
composto pela junção dos elementos dos vetores anteriores, também ordenado de maneira
crescente.*/

#include <stdio.h>

#define TAM 5

void getNums(int vetorX[], int vetorY[]);
void uniao(int vetorX[], int vetorY[]);

int main()
{
    int vetorX[TAM] = {0},
        vetorY[TAM] = {0};

    getNums(vetorX, vetorY);
    uniao(vetorX, vetorY);

    return 0;
}

void getNums(int vetorX[], int vetorY[])
{
    /*====== VETOR x ======*/

    for (int i = 0; i < TAM; i++)
    {

        printf("Valor %d do vetor X: ", i + 1);
        scanf("%d", &vetorX[i]);

        for (int j = 0; j < TAM; j++)
        {
            int aux = 0;
            if (vetorX[i] < vetorX[j])
            {
                aux = vetorX[i];
                vetorX[i] = vetorX[j];
                vetorX[j] = aux;
            }
        }
    }
    printf("\nVetor X ordenado de forma crescente: [ ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vetorX[i]);
    }
    printf("]\n\n");

    /*====== VETOR Y ======*/

    for (int i = 0; i < TAM; i++)
    {
        int aux = 0;

        printf("Valor %d do vetor Y: ", i + 1);
        scanf("%d", &vetorY[i]);

        for (int j = 0; j < TAM; j++)
        {
            if (vetorY[i] < vetorY[j])
            {
                aux = vetorY[i];
                vetorY[i] = vetorY[j];
                vetorY[j] = aux;
            }
        }
    }
    printf("\nVetor Y ordenado de forma crescente: [ ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vetorY[i]);
    }
    printf("]\n\n");
}
void uniao(int vetorX[], int vetorY[])
{
    int count = 0,
        uniao[TAM * 2];

    for (int i = 0; i < TAM; i++)
    {
        uniao[count] = vetorX[i];
        count++;
    }

    for (int i = 0; i < TAM; i++)
    {
        int jaExiste = 0;

        for (int j = 0; j < count; j++)
        {
            if (vetorY[i] == uniao[j])
            {
                jaExiste = 1;
                break;
            }
        }

        if (jaExiste == 0)
        {
            uniao[count] = vetorY[i];
            count++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        int aux = 0;

        for (int j = 0; j < count; j++)
        {
            if (uniao[i] > uniao[j])
            {
                aux = uniao[i];
                uniao[i] = uniao[j];
                uniao[j] = aux;
            }
        }
    }
    printf("\nUniao de X e Y ordenado de forma crescente: [ ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", uniao[i]);
    }
    printf("]\n\n");
}