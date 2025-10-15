/*Crie um programa que preencha uma primeira matriz de ordem 3 X 4 e uma
segunda matriz 4 X 2. O programa deverá, também, calcular e mostrar a matrizresultante do produto matricial das duas matrizes anteriores, armazenando-o em
uma terceira matriz de ordem 3 X 2.*/

#include <stdio.h>

void preenche(int matriz1[3][4], int matriz2[4][2]);
void produto(int matriz1[3][4], int matriz2[4][2], int produtoMatriz[3][2]);

int main()
{

    int matriz1[3][4],
        matriz2[4][2],
        produtoMatriz[3][2] = {0};
    ;

    preenche(matriz1, matriz2);
    produto(matriz1, matriz2,produtoMatriz);

    return 0;
}

void preenche(int matriz1[3][4], int matriz2[4][2])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Matriz 1, Valor da posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Matriz 2, Valor da posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
        printf("\n");
    }
}

void produto(int matriz1[3][4], int matriz2[4][2], int produtoMatriz[3][2])
{

    const int LIN = 3,
              COL = 2;

    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                produtoMatriz[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("\nProduto Matricial é:\n");

    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("Valor da posicao [%d][%d] é %d \n", i + 1, j + 1, produtoMatriz[i][j]);
        }
        printf("\n");
    }
}
