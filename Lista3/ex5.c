#include <stdio.h>

int main()
{
    int a, b, n, c = 0, temp;

    printf("Insira a quantidade de vezes: ");
    scanf("%d", &n);

    a = 0;
    b = 1;
    for (int i = 0; i < n; i++)
    {

        printf(" %d  ",a);
        c = a + b;
        temp = b;
        b = c;
        a = temp;
    }
}