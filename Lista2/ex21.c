#include <stdio.h>

int main(){
    int codigoEstado, pesoCarga, codigoCarga, precoQuilo;
    float imposto;
    
    printf("=== TABELA DE IMPOSTOS ===\n");
    printf("Código 1: 35%% de imposto\n");
    printf("Código 2: 25%% de imposto\n");
    printf("Código 3: 15%% de imposto\n");
    printf("Código 4: 5%% de imposto\n");
    printf("Código 5: Isento de imposto\n");
    printf("==========================\n\n");
    
    printf("=== TABELA DE PREÇOS ===\n");
    printf("Código 10 a 20: 100 por quilo\n");
    printf("Código 21 a 30: 250 por quilo\n");
    printf("Código 31 a 40: 340 por quilo\n");
    printf("=========================\n\n");
    
    printf("Insira o código do estado: ");
    scanf("%d", &codigoEstado);
    printf("Insira o peso da carga (em toneladas): ");
    scanf("%d", &pesoCarga);
    printf("Insira o código da carga: ");
    scanf("%d", &codigoCarga);
    
    switch (codigoEstado) {
        case 1:
            imposto = 0.35;
            break;
        case 2:
            imposto = 0.25;
            break;
        case 3:
            imposto = 0.15;
            break;
        case 4:
            imposto = 0.05;
            break;
        case 5:
            imposto = 0;
            break;
        default:
            printf("CÓDIGO DO ESTADO INVÁLIDO!");
            return 1;
    }
    
    if (codigoCarga >= 10 && codigoCarga <= 20) {
        precoQuilo = 100;
    } else if (codigoCarga >= 21 && codigoCarga <= 30) {
        precoQuilo = 250;
    } else if (codigoCarga >= 31 && codigoCarga <= 40) {
        precoQuilo = 340;
    } else {
        printf("CÓDIGO DA CARGA INVÁLIDO!");
        return 1;
    }

    printf("\n");

    int toneladaParaKilo = pesoCarga *1000;
    float precoCarga = toneladaParaKilo * precoQuilo;
    float valorImposto = precoCarga * imposto;
    float valorFinal = precoCarga + valorImposto;

    printf("Peso da carga: %d quilos\n", toneladaParaKilo);
    printf("O valor da carga é: R$%.2f\n",precoCarga);
    printf("Imposto: %.2f\n", valorImposto);
    printf("Valor final é: R$%.2f\n", valorFinal);
    
    return 0;
}