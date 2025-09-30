#include <stdio.h>

void converte_seg(int seg);

int main()
{
    int temp;

    printf("Ensira os Segundos: ");
    scanf("%d", &temp);
    converte_seg(temp);
}

void converte_seg(int seg)
{
    int hr, min;

    hr = seg / 3600;

    min = (seg % 3600) / 60;

    seg = seg % 60;

    printf("A hora: %d\n", hr);
    printf("Minuto: %d\n", min);
    printf("Segundos: %d\n", seg);
}