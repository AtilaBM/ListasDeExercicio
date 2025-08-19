#include <stdio.h>

int main()
{
    float labAssignment, finalTest, semesterTest, average;

    printf("Insert the values for laboratory assignment final test and semester test\n");
    printf("==========================\n");

    printf("Enter the laboratory assignment value: ");
    scanf("%f", &labAssignment);

    printf("Enter the final test value: ");
    scanf("%f", &finalTest);

    printf("Enter the semester test value: ");
    scanf("%f", &semesterTest);

    average = ((labAssignment * 2) + (semesterTest * 3) + (finalTest * 5)) / 10;

    printf("==========================\n");

    if (average >= 0.0 && average <= 4.99)
        printf("Your final grade is E\n");
    else if (average >= 5.0 && average <= 5.99)
        printf("Your final grade is D\n");
    else if (average >= 6.0 && average <= 6.99)
        printf("Your final grade is C\n");
    else if (average >= 7.0 && average <= 7.99)
        printf("Your final grade is B\n");
    else
    {
        printf("Your Final grade is A\n");
    }

    printf("==========================\n");

    return 0;
}