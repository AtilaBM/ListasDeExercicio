#include <stdio.h>

int main(){

    int opProduto,opPais,pesoProduto,precoGrama;
    float imposto,precoProduto;

  printf("Insira a opção do produto, opção do país, peso do produto e preço do produto: \n\n");

      printf("=== TABELA DE PREÇOS ===\n");
    printf("Código 1 a 4: 10 por grama\n");
    printf("Código 5 a 7: 25 por grama\n");
    printf("Código 8 a 10: 35 por grama\n");
    printf("========================\n\n");

  printf("Insira o código do produto: ");
scanf("%d", &opProduto);
printf("Insira o código do país(1,2,3): ");
scanf("%d", &opPais);
printf("Insira o peso do produto: ");
scanf("%d", &pesoProduto);
printf("Insira o preço do produto: ");
scanf("%f", &precoProduto);

switch (opPais)
{
case 1:
    imposto = 0;
    break;
case 2:
    imposto = 0.15;
    break;
    case 3:
    imposto =0.25;
    break;
default:
printf("OPÇÃO INVALIDA!\n");
    break;
}

switch (opProduto)
{
case 1:
case 2:
case 3:
case 4:
    precoGrama = 10;
    break;
case 5:
case 6:
case 7:
precoGrama = 25;
    break;
case 8:
case 9:
case 10:
precoGrama =35;
break;
default:
printf("OPÇÃO INVALIDA!\n");

    break;
}

int pesoProdutoGrama = pesoProduto * 1000;
float precoBruto = precoGrama * pesoProdutoGrama;
float precoImposto = precoBruto * imposto;
float precoFinal = precoBruto + precoImposto;

printf("\n");

printf("Peso do produto em gramas: %d\n", pesoProdutoGrama);
printf("Preço bruto: %.2f\n", precoBruto);
printf("Preço do imposto: %.0f%%\n", imposto*100);
printf("Preço final: %.2f\n\n", precoFinal);
}