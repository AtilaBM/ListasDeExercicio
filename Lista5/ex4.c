/*Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre dois
vetores resultantes. O primeiro vetor resultante deve conter os números positivos; o segundo
deve conter os números negativos. Cada vetor resultante vai ter, no máximo, oito posições, que
poderão não ser completamente utilizados. */

#include <stdio.h>

#define TAM 8

void getNums(int nums[]);
void calc(int nums[]);

int main()
{

    int nums[TAM];

    getNums(nums);
    calc(nums);

    return 0;
}

void getNums(int nums[])
{
    for (int i = 0; i < TAM; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
}

void calc(int nums[])
{
    int pos[TAM] = {0},
        neg[TAM] = {0},
        cpos=0,
        cneg=0;

    for (int i = 0; i < TAM; i++)
    {
        if (nums[i] < 0)
        {
            neg[cneg] = nums[i];
            cneg++;
        }
        else if (nums[i] >= 0)
        {

            pos[cpos] = nums[i];
            cpos++;
        }
    }

    printf("\n\nArray positivo [ ");
    for (int j = 0; j < cpos; j++)
    {
        printf("%d ", pos[j]);
    }
    printf("]");

    printf("\n\nArray Negativo [ ");
    for (int k = 0; k < cneg; k++)
    {
        printf("%d ", neg[k]);
    }
    printf("]\n");
}
