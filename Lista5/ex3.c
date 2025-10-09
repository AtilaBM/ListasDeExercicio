/*Uma pequena loja de artesanato possui apenas um vendedor e comercializa dez tipos de
objetos. O vendedor recebe, mensalmente, salário de R$ 545,00, acrescido de 5% do valor total
de suas vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a
quantidade vendida de cada peça deve ficar em outro vetor, mas na mesma posição. Crie um
programa que receba os preços e as quantidades vendidas, armazenando-os em seus
respectivos vetores (ambos com tamanho dez). Depois, determine e mostre:
- um relatório contendo quantidade vendida, valor unitário e valor total de cada objeto. Ao final,
deverá ser mostrado o valor geral das vendas e o valor da comissão que será paga ao vendedor;
- a quantidade do objeto mais vendido e sua posição no vetor (não se preocupe com empates.)*/

#include <stdio.h>

#define TAM 10

void objetos(int quant[], float values[]);
void relatorio(int quant[], float values[]);

int main()
{
    int quant[TAM];
    float values[TAM];

    objetos(quant, values);
    relatorio(quant, values);

    return 0;
}

void objetos(int quant[], float values[])
{
    for (int i = 0; i < TAM; i++)
    {
        printf("Informe a quantidade vendida do objeto %d: ", i + 1);
        scanf("%d", &quant[i]);
        printf("Informe o preco unitario do objeto %d: ", i + 1);
        scanf("%f", &values[i]);
        printf("\n");
    }
}

void relatorio(int quant[], float values[])
{

    float total = 0;
    int maior = quant[0], posicao;

    printf("\n========== RELATORIO ==========\n\n");

    for (int i = 0; i < TAM; i++)
    {
        printf("===== Objeto %d ======\n", i + 1);
        printf("Quantidade vendida: %d\n", quant[i]);
        printf("Preco unitario: R$%.2f\n", values[i]);
        printf("Valor total vendido: R$%.2f\n", quant[i] * values[i]);
        printf("\n");
    }

    for (int j = 0; j < TAM; j++)
    {
        total += (quant[j] * values[j]);
    }

    printf("\nTotal vendido é R$%.2f\n", total);
    printf("O vendedor receberá R$ %.2f de comissão, totalizando R$ %.2f no salário.\n\n", total * 0.05, 545.00 + total * 0.05);

    for (int k = 0; k < TAM; k++)
    {
        if (maior < quant[k])
        {
            maior = quant[k];
            posicao = k;
        }
    }

    printf("O objeto mais vendido foi o objeto %d\n", posicao + 1);
    printf("Vendeu %d unidades\n\n", maior);
}
