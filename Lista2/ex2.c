#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Insira os valores para nota 1, nota 2 e nota 3\n");
    printf("==========================\n");

    printf("Digite o valor da nota 1: ");
    scanf("%f", &nota1);

    printf("Digite o valor da nota 2: ");
    scanf("%f", &nota2);

    printf("Digite o valor da nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("==========================\n");

    if (media >= 0.0 && media <= 2.99)
        printf("Você foi reprovado\n");
    else if (media >= 3.0 && media <= 6.99)
        printf("Você deverá fazer prova de recuperação\n");
    else
    {
        printf("Você foi aprovado\n");
    }

    printf("==========================\n");

    return 0;
}