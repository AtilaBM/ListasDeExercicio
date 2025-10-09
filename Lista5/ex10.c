/*Faça um programa que preencha um vetor com os modelos de cinco carros (Exemplo de
modelos: Corsa, Gol,Palio, Sandero, etc.) Carregue outro vetor com o consumo destes carros,
isto é, quantos quilômetros cada um deles faz com um litro de combustível, calcule e mostre:
- O modelo de carro mais econômico;
- Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma
distância de 1.000 quilômetros.*/

#include <stdio.h>

#define TAM 5

void getModelos(char modelos[][20]);
void getConsumo(float consumo[], char modelos[][20]);
void calcularEconomico(char modelos[][20], float consumo[]);
void resultados(char modelos[][20], float consumo[]);

int main()
{
    char modelos[TAM][20];
    float consumo[TAM];

    getModelos(modelos);
    getConsumo(consumo, modelos);
    calcularEconomico(modelos, consumo);
    resultados(modelos, consumo);

    return 0;
}

void getModelos(char modelos[][20])
{
    for (int i = 0; i < TAM; i++)
    {
        printf("\nModelo %d: ", i + 1);
        scanf(" %s", &modelos[i]);
    }
    printf("\nModelos: [ ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%s ", modelos[i]);
    }
    printf("]\n\n");
}

void getConsumo(float consumo[], char modelos[][20])
{
    for (int i = 0; i < TAM; i++)
    {
        printf("Quantos quilômetros o %s faz com um litro de combustível: ", modelos[i]);
        scanf("%f", &consumo[i]);
        printf("\n");
    }
}

void calcularEconomico(char modelos[][20], float consumo[])
{

    int pos = 0;
    float maior = consumo[0];

    for (int i = 0; i < TAM; i++)
    {

        if (consumo[i] > maior)
        {
            maior = consumo[i];
            pos = i;
        }
    }

    printf("\n\nO carro mais economico é o %s rodando %.2f KMs com 1 litro\n\n", modelos[pos], maior);
}

void resultados(char modelos[][20], float consumo[])
{
   float litros[TAM] = {0};

    for (int i = 0; i < TAM; i++)
    {
        litros[i] = 1000.0 / consumo[i];
        printf("Modelo: %s || Consumo: %.2f || Litros: %.2f\n", modelos[i], consumo[i], litros[i]);
    }
}
