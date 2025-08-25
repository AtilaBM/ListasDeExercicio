#include <stdio.h>

int main()
{
    float trabalho_laboratorio, prova_final, prova_semestre, media;

    printf("Insira os valores para trabalho de laboratório, prova final e prova do semestre\n");
    printf("==========================\n");

    printf("Digite o valor do trabalho de laboratório: ");
    scanf("%f", &trabalho_laboratorio);

    printf("Digite o valor da prova final: ");
    scanf("%f", &prova_final);

    printf("Digite o valor da prova do semestre: ");
    scanf("%f", &prova_semestre);

    media = ((trabalho_laboratorio * 2) + (prova_semestre * 3) + (prova_final * 5)) / 10;

    printf("==========================\n");

    if (media >= 0.0 && media <= 4.99)
        printf("Sua nota final é E\n");
    else if (media >= 5.0 && media <= 5.99)
        printf("Sua nota final é D\n");
    else if (media >= 6.0 && media <= 6.99)
        printf("Sua nota final é C\n");
    else if (media >= 7.0 && media <= 7.99)
        printf("Sua nota final é B\n");
    else
    {
        printf("Sua nota final é A\n");
    }

    printf("==========================\n");

    return 0;
}