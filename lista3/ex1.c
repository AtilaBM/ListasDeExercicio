#include <stdio.h>

int main()
{
    float salario = 1000, aumento = 0.15;

    salario = salario + (salario*aumento);

    int tempo = 2025 - 2007;

    for ( i = 0; i < tempo; i++)
    {
        aumento *= 2;
        salario = salario + (salario*aumento);
    }
    
    return 0;
}