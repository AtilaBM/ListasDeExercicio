/*Faça um programa que receba os valores antigo e atual de um determinado produto. Chame
uma sub-rotina que determine o percentual de acréscimo entre esses valores. O resultado
deverá ser mostrado no programa principal. (5)*/

#include <stdio.h>

float calcula_percentual(float novo_valor, float antigo_valor);

int main()
{

    float novo_valor, antigo_valor, resul;

    printf("Ensira o valor antigo: ");
    scanf("%f", &antigo_valor);
    printf("Ensira o valor novo: ");
    scanf("%f", &novo_valor);

    resul = calcula_percentual(novo_valor, antigo_valor);
    printf("O percentual é: %.2f%%\n", resul);
    return 0;
}

float calcula_percentual(float novo_valor, float antigo_valor)
{
    float resul;

    resul = ((novo_valor - antigo_valor) / antigo_valor) * 100;
    return resul;
}
