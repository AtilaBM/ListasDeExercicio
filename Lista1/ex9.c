#include <stdio.h>

int main()
{
    int base, height;

    printf("Insert the values for base and height of the triangle\n");
    printf("---------------------------------\n");

    printf("Base: ");
    scanf("%d", &base);
    printf("Height: ");
    scanf("%d", &height);

    float area = (float)(base * height) / 2;
    printf("---------------------------------\n");

    printf("The area of the triangle is %.2f\n", area);

    return 0;
}