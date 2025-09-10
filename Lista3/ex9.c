#include <stdio.h>
#include<stdlib.h>

int main()
{

    int n;
    float maior, menor;

    printf("Quantos numeros vai querer: ");
    scanf("%d", &n);

    float nums[n];

    for (int i = 0; i < n; i++)
    {
        printf("%dº Numero: ", i + 1);
        scanf("%f", &nums[i]);
    }

    maior = nums[0];
    menor = nums[0];

    for (int j = 0; j < n; j++)
    {
        if (nums[j] == -1)
        {
            printf("%.1f detectado programa encerrando\n", nums[j]);
            exit(0);
        }
        else
        {

            if (nums[j] > maior)
            {
                maior = nums[j];
            }
            if (nums[j] < menor)
            {
                menor = nums[j];
            }
        }
    }

    printf("Entre esses numeros [");

    for (int k = 0; k < n; k++)
    {
        printf("|%.2f|", nums[k]);
    }
    printf("] %.2f é o maior \n", maior);

    printf("Entre esses numeros [");

    for (int k = 0; k < n; k++)
    {
        printf("|%.2f|", nums[k]);
    }
    printf("] %.2f é o menor \n", menor);

}