#include <stdio.h>

int main()
{
    float feet;

    printf("Insert the value in feet: ");
    scanf("%f", &feet);

    float feetToInch = feet * 12;
    float feetToYard = feet / 3;
    float feetToMiles = feet / 5280;

    printf("-------------------\n");

    printf("%.2f feets to Inchs is: %.3f\n", feet, feetToInch);
    printf("%.2f feets to Yards is: %.3f\n", feet, feetToYard);
    printf("%.2f feets to Miles is: %f\n", feet, feetToMiles);

    printf("-------------------\n");
    return 0;
}