/* Crie um programa que preencha uma matriz 3 X 4 com números inteiros e some
cada uma das linhas, armazenando os resultados das somas em um vetor. A
seguir, o programa deverá multiplicar cada elemento da matriz pela soma da
linha correspondente e mostrar a matriz resultante.*/

#include <stdio.h>

#define LIN 3
#define COL 4

void preencheMatriz(int matriz[LIN][COL]);
void somaLinha(int matriz[LIN][COL], int sum[LIN]);
void multiplica(int matriz[LIN][COL], int sum[LIN], int mult[LIN][COL]);

int main()
{

    int matriz[LIN][COL],
        sum[LIN] = {0},
        mult[LIN][COL] = {0};

    preencheMatriz(matriz);
    somaLinha(matriz, sum);
    multiplica(matriz, sum, mult);

    return 0;
}

void preencheMatriz(int matriz[LIN][COL])
{
    for (int i = 0; i < LIN; i++)
    {
        for (int k = 0; k < COL; k++)
        {
            printf("Insira o valor da linha %d da coluna %d: ", i + 1, k + 1);
            scanf("%d", &matriz[i][k]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < LIN; i++)
    {
        for (int k = 0; k < COL; k++)
        {
            printf("valor da matriz[%d][%d] eh %d: \n", i + 1, k + 1, matriz[i][k]);
        }
        printf("\n");
    }
}

void somaLinha(int matriz[LIN][COL], int sum[LIN])
{
    int count = 0;

    printf("\n");
    for (int i = 0; i < LIN; i++)
    {
        for (int k = 0; k < COL; k++)
        {
            sum[count] += matriz[i][k];
        }
        printf("Soma da linha %d: %d\n", i + 1, sum[count]);
        count++;
    }
    printf("\n");
}

void multiplica(int matriz[LIN][COL], int sum[LIN], int mult[LIN][COL])
{
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {

            mult[i][j] = matriz[i][j] * sum[i];
        }
    }

    printf("\nResultado da multiplicacao: \n");

    for (int i = 0; i < LIN; i++)
    {
        for (int k = 0; k < COL; k++)
        {

            printf("Matriz da multiplacao[%d][%d]: %d\n", i + 1, k + 1, mult[i][k]);
        }
        printf("\n");
    }
}
