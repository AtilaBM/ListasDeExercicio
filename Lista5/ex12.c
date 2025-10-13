/*Na teoria dos sistemas, define-se o elemento MINminMax de uma matriz como o maior elemento da linha em que se encontra o menor elemento da matriz. Elabore um programa que carregue uma matriz 4 X 4 com números reais, calcule e mostre seu MINminMax e sua posição (linha e coluna).*/

#include <stdio.h>

#define LIN 4
#define COL 4

void preenche(float matriz[LIN][COL]);
void min(float matriz[LIN][COL], int *pos);
void minMax(float matriz[LIN][COL], int pos);

int main()
{

    float matriz[LIN][COL];
    int pos;

    preenche(matriz);
    min(matriz, &pos);
    minMax(matriz, pos);

    return 0;
}

void preenche(float matriz[LIN][COL])
{
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("Valor da posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
        printf("\n");
    }
}

void min(float matriz[LIN][COL], int *pos)
{
    float menor = matriz[0][0];
    int col;
    *pos = 0;

    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                *pos = i;
                col = j;
            }
        }
    }

    printf("O menor valor da matriz é %.2f na posicao[%d][%d]\n", menor, *pos + 1, col + 1);
}

void minMax(float matriz[LIN][COL], int pos)
{
    float maior = matriz[pos][0];
    int col = 0;

    for (int j = 1; j < COL; j++)
    {
        if (matriz[pos][j] > maior)
        {
            maior = matriz[pos][j];
            col = j;
        }
    }

    printf("O valor minMax da matriz é %.2f na posição [%d][%d]\n", maior, pos + 1, col + 1);
}
