/*Preencha dois vetores de 5 posições cada, e faça a troca de valores entre os vetores, de modo
que o primeiro vetor receba os valores do segundo vetor e o segundo vetor, receba os valores do
primeiro vetor. Exiba os vetores antes e após a troca*/

#include <stdio.h>

#define TAM 5

void getVet(int nums1[], int nums2[]);
void troca(int nums1[], int nums2[]);

int main()
{
    int nums1[TAM],
        nums2[TAM];

    getVet(nums1, nums2);
    troca(nums1, nums2);

    return 0;
}

void getVet(int nums1[], int nums2[])
{
    for (int i = 0; i < TAM; i++)
    {
        printf("Valor %d para o vetor 1: ", i + 1);
        scanf("%d", &nums1[i]);
        printf("Valor %d para o vetor 2: ", i + 1);
        scanf("%d", &nums2[i]);
    }

    /*=============PRINT VETOR 1=======================*/

    printf("\nVetor 1 [ ");

    for (int k = 0; k < TAM; k++)
    {
        printf("%d ", nums1[k]);
    }
    printf(" ]\n");

    /*============= PRINT VETOR 2 =======================*/

    printf("\nVetor 2 [ ");

    for (int j = 0; j < TAM; j++)
    {
        printf("%d ", nums2[j]);
    }
    printf(" ]\n");
}

void troca(int nums1[], int nums2[])
{
    int aux;

    for (int i = 0; i < TAM; i++)
    {
        aux = nums1[i];
        nums1[i] = nums2[i];
        nums2[i] = aux;
    }

    printf("\n=================== Valor apos a troca ===================\n");

    /*============= PRINT VETOR 1 =======================*/

    printf("\nVetor 1 [ ");

    for (int k = 0; k < TAM; k++)
    {
        printf("%d ", nums1[k]);
    }
    printf(" ]\n");

    /*============= PRINT VETOR 2 =======================*/

    printf("\nVetor 2 [ ");

    for (int j = 0; j < TAM; j++)
    {
        printf("%d ", nums2[j]);
    }
    printf(" ]\n");
}
