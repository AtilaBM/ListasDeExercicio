#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2;

    printf("Insert 2 decimal numbers biggest than 0 \n");
    printf("---------------------------------\n");

    printf("Number 1: ");
    scanf("%d", &n1);
    printf("Number 2: ");
    scanf("%d", &n2);

    printf("---------------------------------\n");

    printf("The number 1(%d) to the power of number 2(%d) is %.2f \n", n1, n2, pow(n1, n2));
    printf("The number 2(%d) to the power of number 1(%d) is %.2f \n", n2, n1, pow(n2, n1));
}