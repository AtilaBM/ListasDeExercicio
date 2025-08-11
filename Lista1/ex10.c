#include <stdio.h>
#include <math.h>

int main()
{
    int radius;
    float pi = 3.14;

    printf("Insert the value for radius of the circle\n");
    printf("---------------------------------\n");

    printf("Radius: ");
    scanf("%d", &radius);

    float area = pi*pow(radius,2);
    printf("---------------------------------\n");

    printf("The area of the circle is %.2f\n", area);

    return 0;
}