#include <stdio.h>
#include <math.h>

int main()
{
    int op;

    printf("========Choose an option=========\n");

    printf("Option 1: Sum two numbers \n");
    printf("Option 2: Square root \n");
    printf("======================================\n");
    printf("Option: ");
    scanf("%d", &op);
    printf("======================================\n");

    switch (op)
    {
    case 1:
        float number1, number2;

        printf("Insert the first number: ");
        scanf("%f", &number1);
        printf("Insert the second number: ");
        scanf("%f", &number2);

        printf("The sum is: %.2f \n", number1 + number2);
        break;

    case 2:
        float number;

        printf("Insert a number: ");
        scanf("%f", &number);
        printf("The square root is : %.2f \n", sqrt(number));

        break;

    default:
        printf("INVALID OPTION!\n");
        break;
    }
}