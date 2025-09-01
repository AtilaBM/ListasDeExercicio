#include <stdio.h>

int main()
{
    float salario = 1000, aumento = 0.15;

    salario = salario + (salario*aumento);

    int i =18;

    for ( i ; i < 18; i++)
    {
        aumento *= 2;
        salario = salario + (salario*aumento);
    }
    
    return 0;
}