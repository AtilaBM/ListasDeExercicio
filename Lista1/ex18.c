#include <stdio.h>

int main()
{
    float petFood, amountFood;
    int days = 5;

    printf("Insert the values for pet food and amount of food\n");
    printf("-------------------------------\n");

    printf("Insert the pet food weight(kg): ");
    scanf("%f", &petFood);
    printf("Insert the amount of food for each cat(grams): ");
    scanf("%f", &amountFood);

    float amountFood5days = ((amountFood * 2) * 5) / 1000;
    // float kgToGram = petFood/1000;
    float remainFood = petFood - amountFood5days;
    printf("-------------------------------\n");
    printf("After 5 days remain %.2f(kg) of pet food\n", remainFood);
    printf("-------------------------------\n");
    return 0;
}