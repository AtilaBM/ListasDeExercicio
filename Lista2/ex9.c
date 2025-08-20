#include <stdio.h>
#include <time.h>

int main()
{
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char buffer[100];

    printf("%02d/%02d/%d\n", tm->tm_mday, tm->tm_mon + 1, tm->tm_year + 1900);

    strftime(buffer, sizeof(buffer), "%B", tm);
    printf("%s and %02d:%02d\n", buffer, tm->tm_hour, tm->tm_min);

    return 0;
}