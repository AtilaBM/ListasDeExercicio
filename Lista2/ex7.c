#include <stdio.h>

int main()
{
    int op;
    float a, b, c, temp;

    printf("========Insert 3 numbers=========\n");

    printf("First number: ");
    scanf("%f", &a);
    printf("Second number: ");
    scanf("%f", &b);
    printf("Third number: ");
    scanf("%f", &c);

    printf("========Choose an option=========\n");

    printf("Option 1: the three numbers in ascending order \n");
    printf("Option 2: the three numbers in descending order \n");
    printf("Option 3: the largest number stays between the other two numbers\n");
    printf("======================================\n");
    printf("Option: ");
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

        printf("The numbers in ascending order: %.2f || %.2f || %.2f\n", a, b, c);
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
        printf("The numbers in descending order: %.2f || %.2f || %.2f\n", a, b, c);

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
        printf("The largest number (%.2f) between the others: %.2f || %.2f || %.2f\n",b, a, b, c);
        
        
        break;

    default:
        printf("INVALID OPTION!\n");
        break;
    }
}