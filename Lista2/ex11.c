#include <stdio.h>

int main()
{
    int start_hour, start_minute;
    int end_hour, end_minute;
    int start_total_min, end_total_min;
    int duration_min, duration_hours, duration_minutes;

    printf("Enter start time:\n");
    printf("Hour: ");
    scanf("%d", &start_hour);
    printf("Minute: ");
    scanf("%d", &start_minute);

    printf("\nEnter end time:\n");
    printf("Hour: ");
    scanf("%d", &end_hour);
    printf("Minute: ");
    scanf("%d", &end_minute);

    start_total_min = start_hour * 60 + start_minute;
    end_total_min = end_hour * 60 + end_minute;

    if (end_total_min >= start_total_min)
    {
        duration_min = end_total_min - start_total_min;
    }
    else
    {
        duration_min = (24 * 60) - start_total_min + end_total_min;
    }

    duration_hours = duration_min / 60;
    duration_minutes = duration_min % 60;

    printf("\nGame start: %02d:%02d\n", start_hour, start_minute);
    printf("Game end: %02d:%02d\n", end_hour, end_minute);
    printf("Game duration: %d hours and %d minutes\n", duration_hours, duration_minutes);

    return 0;
}