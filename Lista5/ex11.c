/* Crie um programa que preencha uma matriz 3 X 4 com números inteiros e some
cada uma das linhas, armazenando os resultados das somas em um vetor. A
seguir, o programa deverá multiplicar cada elemento da matriz pela soma da
linha correspondente e mostrar a matriz resultante.*/

#include <stdio.h>

#define LIN 3
#define COL 4

void preencheMatrix(int matrix[LIN][COL]);
void somaLinha(int matrix[LIN][COL],int sum[LIN]);

int main()
{

    int matrix[LIN][COL],
        sum[LIN] = {0};

    preencheMatrix(matrix);
    somaLinha(matrix,sum);

    return 0;
}

void preencheMatrix(int matrix[LIN][COL])
{
    for (int i = 0; i < LIN; i++)
    {
        for (int k = 0; k < COL; k++)
        {
            printf("Insira o valor da linha %d da coluna %d: ", i + 1, k + 1);
            scanf("%d", &matrix[i][k]);
        }
    }
    printf("\n");
    for (int i = 0; i < LIN; i++)
    {
        for (int k = 0; k < COL; k++)
        {
            printf("valor da matrix[%d][%d] eh %d: \n", i + 1, k + 1, matrix[i][k]);
        }
        printf("\n");
    }
}

void somaLinha(int matrix[LIN][COL],int sum[LIN])
{
    int count = 0;

    printf("\n");
    for (int i = 0; i < LIN; i++)
    {
        for (int k = 0; k < COL; k++)
        {
            sum[count] += matrix[i][k];
        }
        printf("Soma da linha %d: %d\n", i + 1, sum[count]);
        count++;
    }
    printf("\n");
}
