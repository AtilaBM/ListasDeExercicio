/*Crie uma sub-rotina que receba como parâmetro a altura e o sexo de uma pessoa e
retorne o seu peso ideal. Para homens: peso ideal = 72.7 * altura – 58; Para mulheres:
peso ideal: 62.1 * altura – 44.7*/

#include <stdio.h>
#include <string.h>

void peso_ideal(float altura, char sexo[]);

int main()
{
    float altura;
    char sexo[20];

    printf("Sexo(homem/mulher): ");
    scanf("%s", sexo);

    printf("Altura(metros): ");
    scanf("%f", &altura);

    peso_ideal(altura, sexo);

    return 0;
}

void peso_ideal(float altura, char sexo[])
{
    float peso = 0;

    if (strcmp(sexo, "homem") == 0)
    {
        peso = 72.7 * altura - 58;
        printf("Seu peso ideal é: %.2f kg\n", peso);
    }
    else if (strcmp(sexo, "mulher") == 0)
    {
        peso = 62.1 * altura - 44.7;
        printf("Seu peso ideal é: %.2f kg\n", peso);
    }
    else
    {
        printf("SEXO INVALIDO!!!\n");
    }
}