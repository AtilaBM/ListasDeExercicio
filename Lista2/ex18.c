#include <stdio.h>

int main()
{
    float x, y, z;

    printf("=========Insira 3 numeros=========\n");

    printf("Numero 1: ");
    scanf("%f", &x);
    printf("Numero 2: ");
    scanf("%f", &y);
    printf("Numero 3: ");
    scanf("%f", &z);

    if (x > (y + z) || z > (x + y) || y > (x + z))
    {
        printf("Não é um triângulo\n");
    }
    else
    {
        if (x == y && x == z && y == z)
        {
            printf("È um triângulo equilátero\n");
        }
        else if ((x == z && x != y) || (x == y && x != z) || (y == z && y != x))
        {
            printf("È um triângulo isósceles\n");
        }
        else if (x != z && x != y && y != z)
        {
            printf("É um triângulo escaleno\n");
        }
    }
}