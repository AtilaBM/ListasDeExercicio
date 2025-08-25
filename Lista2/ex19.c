#include <stdio.h>

int main()
{
    float altura, peso;

    printf("=======Insira sua altura e peso=======\n");
    printf("Altura(em centimetros): ");
    scanf("%f", &altura);
    printf("Peso: ");
    scanf("%f", &peso);

    if (altura < 120.00)
    {
        if (peso <= 60)
        {
            printf("Sua classificação é A\n");
        }
        else if (peso > 60 && peso <= 90)
        {
            printf("Sua classificação é D\n");
        }
        else
        {
            printf("Sua classificação é G\n");
        }
    }
    else if (altura >= 120.00 && altura <= 170.00)
    {
        if (peso <= 60)
        {
            printf("Sua classificação é B\n");
        }
        else if (peso > 60 && peso <= 90)
        {
            printf("Sua classificação é E\n");
        }
        else
        {
            printf("Sua classificação é H\n");
        }
    }
    else
    {
        if (peso <= 60)
        {
            printf("Sua classificação é C\n");
        }
        else if (peso > 60 && peso <= 90)
        {
            printf("Sua classificação é F\n");
        }
        else
        {
            printf("Sua classificação é I\n");
        }
    }

    return 0;
}