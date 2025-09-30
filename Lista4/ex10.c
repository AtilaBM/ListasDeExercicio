/*Crie uma sub-rotina que receba como parâmetro um vetor de dez elementos inteiros
positivos e mostre em outro vetor o valor do fatorial de cada elemento do primeiro
vetor. (13)*/

#include <stdio.h>

void calcula_fatorial(int nums[]);

int main()
{
    int nums[10], i = 0;

    while (i < 10)
    {
        printf("Insira o %dº numero: ", i + 1);
        scanf("%d", &nums[i]);
        i++;
    }
    calcula_fatorial(nums);
}

void calcula_fatorial(int nums[])
{
    int fatoriais[10], fat;

    for (int i = 0; i < 10; i++)
    {
        fat = 1;
        for (int j = 1; j <= nums[i]; j++)
        {
            fat *= j;
        }
        fatoriais[i] = fat;
    }

    for (int k = 0; k < 10; k++)
    {
        printf("Fatorial do %dº numero(%d) é: %d\n", k + 1, nums[k], fatoriais[k]);
    }
}
