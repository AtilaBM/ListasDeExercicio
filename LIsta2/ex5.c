#include <stdio.h>

int main()
{
    float number1, number2, number3,number4, temp;

    printf("Insert 3 numbers in ascending order but the last one: \n");
    printf("===================\n");

    printf("Insert number 1: ");
    scanf("%f", &number1);

    printf("Insert number 2: ");
    scanf("%f", &number2);

    printf("Insert number 3: ");
    scanf("%f", &number3);

    printf("Insert number 4: ");
    scanf("%f", &number4);
    printf("===================\n");

    if (number1 < number2)
    {
        temp = number1;
        number1 = number2;
        number2 = temp;
    }
    if (number2 < number3)
    {
        temp = number2;
        number2 = number3;
        number3 = temp;
    }
    if (number3 < number4)
    {
        temp = number3;
        number3 = number4;
        number4 = temp;
    }


     if (number1 < number2)
    {
        temp = number1;
        number1 = number2;
        number2 = temp;
    }
    if (number2 < number3)
    {
        temp = number2;
        number2 = number3;
        number3 = temp;
    }
    if (number1 < number2)
    {
        temp = number1;
        number1 = number2;
        number2 = temp;
    }
    printf("===================\n");
    printf("In descending order: %.1f || %.1f || %.1f || %.1f\n", number1, number2, number3,number4);
    return 0;
}