#include <stdio.h>

int main()
{
    int op;
    float a, b, c, temp;

    printf("========Insira 3 números=========\n");

    printf("Primeiro número: ");
    scanf("%f", &a);
    printf("Segundo número: ");
    scanf("%f", &b);
    printf("Terceiro número: ");
    scanf("%f", &c);

    printf("========Escolha uma opção=========\n");

    printf("Opção 1: os três números em ordem crescente \n");
    printf("Opção 2: os três números em ordem decrescente \n");
    printf("Opção 3: o maior número fica entre os outros dois\n");
    printf("======================================\n");
    printf("Opção: ");
    scanf("%d", &op);
    printf("======================================\n");

    switch (op)
    {
    case 1:
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        printf("Os números em ordem crescente: %.2f || %.2f || %.2f\n", a, b, c);
        break;

    case 2:
        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (b < c)
        {
            temp = b;
            b = c;
            c = temp;
        }
        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        printf("Os números em ordem decrescente: %.2f || %.2f || %.2f\n", a, b, c);

        break;

    case 3:
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (b < c)
        {
            temp = b;
            b = c;
            c = temp;
        }
        printf("O maior número (%.2f) entre os outros: %.2f || %.2f || %.2f\n", b, a, b, c);

        break;

    default:
        printf("OPÇÃO INVÁLIDA!\n");
        break;
    }
}