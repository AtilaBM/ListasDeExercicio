#include <stdio.h>
#include <time.h>

int main()
{
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;
    time_t data1, data2;
    struct tm tm1 = {0}, tm2 = {0};

    printf("Insira a primeira data:\n");
    printf("Dia: ");
    scanf("%d", &dia1);
    printf("Mês: ");
    scanf("%d", &mes1);
    printf("Ano: ");
    scanf("%d", &ano1);

    printf("\nInsira a segunda data:\n");
    printf("Dia: ");
    scanf("%d", &dia2);
    printf("Mês: ");
    scanf("%d", &mes2);
    printf("Ano: ");
    scanf("%d", &ano2);

    tm1.tm_mday = dia1;
    tm1.tm_mon = mes1 - 1;
    tm1.tm_year = ano1 - 1900;

    tm2.tm_mday = dia2;
    tm2.tm_mon = mes2 - 1;
    tm2.tm_year = ano2 - 1900;

    data1 = mktime(&tm1);
    data2 = mktime(&tm2);

    printf("\nPrimeira data: %02d/%02d/%d\n", dia1, mes1, ano1);
    printf("Segunda data: %02d/%02d/%d\n", dia2, mes2, ano2);

    if (data1 > data2)
    {
        printf("\nA data cronologicamente maior é: %02d/%02d/%d\n", dia1, mes1, ano1);
    }
    else if (data1 < data2)
    {
        printf("\nA data cronologicamente maior é: %02d/%02d/%d\n", dia2, mes2, ano2);
    }
    else
    {
        printf("\nAs duas datas são iguais!\n");
    }

    return 0;
}