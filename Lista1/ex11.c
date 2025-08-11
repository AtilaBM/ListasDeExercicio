#include <stdio.h>
#include <math.h>

int main()
{
    int number;

    printf("Insert a decimal number biggest than 0 \n");
    printf("---------------------------------\n");

    printf("Number: ");
    scanf("%d", &number);

    printf("---------------------------------\n");

    printf("%d squared is %.2f\n", number, pow(number, 2));
    printf("%d cubed is %.2f\n", number, pow(number, 3));
    printf("%d square root is %.2f\n", number, sqrt(number));
    printf("%d cube root is %.2f\n", number, cbrt(number));

    return 0;
}