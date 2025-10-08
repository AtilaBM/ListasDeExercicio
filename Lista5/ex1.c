/*Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre
os números primos e suas respectivas posições */

#include <stdio.h>

void getNum(int nums[]);
void primos(int nums[]);

int main()
{
    int nums[9];

    getNum(nums);
    primos(nums);

    return 0;
}

void getNum(int nums[])
{
    for (int i = 0; i < 9; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
}

void primos(int nums[])
{
    for (int i = 0; i < 9; i++)
    {
        int count = 0;

        for (int j = 1; j <= nums[i]; j++)
        {
            if (nums[i] % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("O numero %d na posicao %d é primo\n", nums[i], i);
        }
        else
        {
            printf("O numero %d na posicao %d não é primo\n", nums[i], i);
        }
    }
}
