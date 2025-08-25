#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("====Insira os valores para A, B e C=====\n");
    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);
    printf("Valor de C: ");
    scanf("%d", &c);

    if (a == 0)
    {
        printf("'a' deve ser diferente de 0\n");
    }
    else
    {
        float delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("Não existe raiz real\n");
        }
        else if (delta == 0)
        {
            float
                x = -b / (2.0 * a);
            printf("Existe uma raiz real %.2f\n", x);
        }
        else
        {
            float x1 = (-b - sqrt(delta)) / (2.0 * a);
            float x2 = (-b + sqrt(delta)) / (2.0 * a);

            printf("X1 é %f\n", x1);
            printf("X2 é %f\n", x2);
        }
    }

    return 0;
}