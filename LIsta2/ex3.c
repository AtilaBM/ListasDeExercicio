#include <stdio.h>

int main()
{
    float number1, number2;

    printf("Insert 2 numbers: \n");
    printf("===================\n");

    printf("Insert number 1: ");
    scanf("%f", &number1);

    printf("Insert number 2: ");
    scanf("%f", &number2);
    printf("===================\n");

    (number1 > number2) ? printf("%.2f is greater than %.2f\n", number1, number2)
                        : printf("%.2f is greater than %.2f\n", number2, number1);

    printf("===================\n");

    return 0;
}