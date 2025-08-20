#include <stdio.h>

int main()
{
    float number1, number2, number3, temp;

    printf("Insert 3 numbers: \n");
    printf("===================\n");

    printf("Insert number 1: ");
    scanf("%f", &number1);

    printf("Insert number 2: ");
    scanf("%f", &number2);

    printf("Insert number 3: ");
    scanf("%f", &number3);
    printf("===================\n");

    if (number1 > number2)
    {
        temp = number1;
        number1 = number2;
        number2 = temp;
    }
    if (number2 > number3)
    {
        temp = number2;
        number2 = number3;
        number3 = temp;
    }
    if (number1 > number2)
    {
        temp = number1;
        number1 = number2;
        number2 = temp;
    }
    printf("===================\n");
    printf("In ascending order: %.1f || %.1f || %.1f\n", number1, number2, number3);
    return 0;
}