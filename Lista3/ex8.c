#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    float sum = 0.0;
    float media = 0, mediaPar = 0, percentImpar = 0;
    float quantPar = 0, quantImpar = 0;
    float maior, menor;

    printf("Quantos numeros quer colocar: ");
    scanf("%d", &n);

    float nums[n];

    for (int i = 0; i < n; i++)
    {
        printf("%dº Numero: ",i+1);
        scanf("%f", &nums[i]);
    }

    printf("==========================\n");

    maior = nums[0];
    menor = nums[0];

    for (int j = 0; j < n; j++)
    {
        sum += nums[j];

        if (nums[j] > maior)
        {
            maior = nums[j];
        }
        if (nums[j] < menor)
        {
            menor = nums[j];
        }

        if ((int)nums[j] % 2 == 0)
        {
            mediaPar += nums[j];
            quantPar++;
        }
        else
        {
            quantImpar++;
        }
    }

    media = sum / n;
    percentImpar = (quantImpar / n) * 100;

    printf("==========================\n");
    printf("a) A soma dos numeros digitados e: %.2f\n", sum);
    printf("b) A quantidade de numeros digitados e: %d\n", n);
    printf("c) A media dos numeros digitados e: %.2f\n", media);
    printf("d) O maior numero digitado e: %.2f\n", maior);
    printf("e) O menor numero digitado e: %.2f\n", menor);
    printf("f) A media dos numeros pares e: %.2f\n", mediaPar / quantPar);
    printf("g) A porcentagem de numeros impares e: %.2f%%\n", percentImpar);
}

/*a) A soma dos números digitados;
b) A quantidade de números digitados;
c) A média dos números digitados;
d) O maior número digitado;
e) O menor número digitado;
f) A média dos números pares;
g) A percentagem dos números ímpares entre todos os números digitados.*/