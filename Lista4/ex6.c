// Elabore um programa contendo uma sub-rotina que receba três notas e uma letra como
// parâmetros. Se a letra for A, então deve ser retornada a média aritmética das notas; se a letra
// for P, então deve ser retornada a média ponderada, com pesos 5, 3 e 2, respectivamente. A
// média calculada deverá ser devolvida ao programa principal para, então, ser mostrada. (7)

#include <stdio.h>

void media(float notas[], char op);

int main()
{

    float notas[3];
    char op;
    int i = 0;

    while (i < 3)
    {
        printf("Ensira a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        i++;
    }

    printf("\nInsira a letra 'A' para média aritmética das notas; Letra 'P' para média ponderada: ");
    scanf(" %c", &op);

    media(notas, op);
    return 0;
}

void media(float notas[], char op)
{
    float resul = 0;

    if (op == 'A')
    {
        resul = (notas[0] + notas[1] + notas[2]) / 3;
        printf("A media aritmetica das notas é: %.2f", resul);
    }
    else if (op == 'P')
    {
        resul = ((notas[0] * 5) + (notas[1] * 3) + (notas[2] * 2)) / 10;
        printf("A media ponderada das notas é: %.2f", resul);
    }
    else
    {
        printf("LETRA INVALIDA!!!\n");
    }
}
