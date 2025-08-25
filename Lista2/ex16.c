#include <stdio.h>

int main()
{
    float precoAtual, mediaVendasMensal, aumento, novoPreco;

    printf("===Insira os valores para preço atual e média mensal de vendas===\n");

    printf("Preço atual: ");
    scanf("%f", &precoAtual);

    printf("Média mensal de vendas: ");
    scanf("%f", &mediaVendasMensal);

    if (mediaVendasMensal < 500 || precoAtual < 30.00)
    {
        aumento = 0.1;
        novoPreco = precoAtual + (precoAtual * aumento);
        printf("O novo preço é R$%.2f\n", novoPreco);
    }
    else if ((mediaVendasMensal >= 500 && mediaVendasMensal < 1200) || (precoAtual >= 30.00 && precoAtual < 80.00))
    {
        aumento = 0.15;
        novoPreco = precoAtual + (precoAtual * aumento);
        printf("O novo preço é R$%.2f\n", novoPreco);
    }
    else
    {
        float reducao = 0.2;
        novoPreco = precoAtual - (precoAtual * reducao);
        printf("O novo preço é R$%.2f\n", novoPreco);
    }

    return 0;
}