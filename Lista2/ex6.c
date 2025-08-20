#include <stdio.h>

int main()
{
    int number;

    printf("Insert a number: \n");
    printf("===================\n");

    printf("Insert number: ");
    scanf("%d", &number);
    printf("===================\n");

    (number % 2 == 0) ? printf("%d is even \n", number)
                        : printf("%d is odd\n", number);

    printf("===================\n");

    return 0;
}