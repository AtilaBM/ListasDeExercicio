/*Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada. Calcule e
mostre os seguintes vetores resultantes:
- A união de X com Y (Todos os elementos de X e de Y sem repetições);
- A diferença entre X e Y (Todos os elementos de X que não existam em Y, sem
repetições)
- A soma de X e Y (A soma de cada elemento de X com o elemento da mesma posição em Y);
- O produto entre X e Y (Multiplicação de cada elemento de X com o elemento de mesma
posição em Y);
- A interseção entre X e Y (Apenas os elementos que aparecem nos dois vetores, sem
repetições).*/

#include <stdio.h>

#define TAM 10

void getNums(int vetorX[], int vetorY[]);
void printNums(int vetorX[], int vetorY[]);
void uniao(int vetorX[], int vetorY[]);
void diferenca(int vetorX[], int vetorY[]);
void soma(int vetorX[], int vetorY[]);
void produto(int vetorX[], int vetorY[]);
void intersecao(int vetorX[], int vetorY[]);

int main()
{
    int vetorX[TAM], vetorY[TAM];

    getNums(vetorX, vetorY);
    printNums(vetorX, vetorY);
    uniao(vetorX, vetorY);
    diferenca(vetorX, vetorY);
    soma(vetorX, vetorY);
    produto(vetorX, vetorY);
    intersecao(vetorX, vetorY);

    return 0;
}

void getNums(int vetorX[], int vetorY[])
{

    for (int i = 0; i < TAM; i++)
    {
        printf("Valor %d do Vetor X:", i + 1);
        scanf("%d", &vetorX[i]);
    }

    printf("\n");

    for (int j = 0; j < TAM; j++)
    {
        printf("Valor %d do Vetor Y:", j + 1);
        scanf("%d", &vetorY[j]);
    }
}

void printNums(int vetorX[], int vetorY[])
{
    printf("\n\nArray X [ ");
    for (int j = 0; j < TAM; j++)
    {
        printf("%d ", vetorX[j]);
    }
    printf("]");

    printf("\n\nArray Y [ ");
    for (int k = 0; k < TAM; k++)
    {
        printf("%d ", vetorY[k]);
    }
    printf("]\n");
}

void uniao(int vetorX[], int vetorY[])
{
    int count = 0,
        aux[TAM * 2];

    for (int i = 0; i < TAM; i++)
    {
        aux[count] = vetorX[i];
        count++;
    }

    for (int i = 0; i < TAM; i++)
    {
        int jaExiste = 0;

        for (int j = 0; j < count; j++)
        {
            if (vetorY[i] == aux[j])
            {
                jaExiste = 1;
                break;
            }
        }

        if (jaExiste == 0)
        {
            aux[count] = vetorY[i];
            count++;
        }
    }

    printf("\nUniao [ ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", aux[i]);
    }
    printf("]\n");
}

void diferenca(int vetorX[], int vetorY[])
{
    int count = 0;
    int aux[TAM];

    for (int i = 0; i < TAM; i++)
    {
        int estaEmY = 0;

        for (int j = 0; j < TAM; j++)
        {
            if (vetorX[i] == vetorY[j])
            {
                estaEmY = 1;
                break;
            }
        }

        if (estaEmY == 0)
        {
            aux[count] = vetorX[i];
            count++;
        }
    }

    printf("\nDiferenca X - Y [ ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", aux[i]);
    }
    printf("]\n");
}

void soma(int vetorX[], int vetorY[])
{
    int mult[TAM];

    for (int i = 0; i < TAM; i++)
    {
        mult[i] = vetorX[i] + vetorY[i];
    }

    printf("\nSoma X + Y [ ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", mult[i]);
    }
    printf("]\n");
}

void produto(int vetorX[], int vetorY[])
{
    int soma[TAM];

    for (int i = 0; i < TAM; i++)
    {
        soma[i] = vetorX[i] * vetorY[i];
    }

    printf("\nMultiplicacao X * Y [ ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", soma[i]);
    }
    printf("]\n");
}

void intersecao(int vetorX[], int vetorY[])
{
    int aux[TAM],
        count = 0;

        for (int i = 0; i < TAM; i++)
        {
            int inter =0;

            for (int j = 0; j < TAM; j++)
            {
                if (vetorX[i] == vetorY[j])
                {
                    inter =1;
                    break;
                }
                
            }

            if (inter==1)
            {
                aux[count] = vetorX[i];
                count++;
            }
            
            
        }

    printf("\nIntersecao X e Y [ ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", aux[i]);
    }
    printf("]\n\n");
}