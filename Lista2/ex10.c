#include <stdio.h>
#include <time.h>

int main()
{
    int day1, month1, year1;
    int day2, month2, year2;
    time_t date1, date2;
    struct tm tm1 = {0}, tm2 = {0};

    printf("Enter the first date:\n");
    printf("Day: ");
    scanf("%d", &day1);
    printf("Month: ");
    scanf("%d", &month1);
    printf("Year: ");
    scanf("%d", &year1);

    printf("\nEnter the second date:\n");
    printf("Day: ");
    scanf("%d", &day2);
    printf("Month: ");
    scanf("%d", &month2);
    printf("Year: ");
    scanf("%d", &year2);

    tm1.tm_mday = day1;
    tm1.tm_mon = month1 - 1;
    tm1.tm_year = year1 - 1900;

    tm2.tm_mday = day2;
    tm2.tm_mon = month2 - 1;
    tm2.tm_year = year2 - 1900;

    date1 = mktime(&tm1);
    date2 = mktime(&tm2);

    printf("\nFirst date: %02d/%02d/%d\n", day1, month1, year1);
    printf("Second date: %02d/%02d/%d\n", day2, month2, year2);

    if (date1 > date2)
    {
        printf("\nThe chronologically larger date is: %02d/%02d/%d\n", day1, month1, year1);
    }
    else if (date1 < date2)
    {
        printf("\nThe chronologically larger date is: %02d/%02d/%d\n", day2, month2, year2);
    }
    else
    {
        printf("\nBoth dates are equal!\n");
    }

    return 0;
}