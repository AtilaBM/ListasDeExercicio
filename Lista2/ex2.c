#include <stdio.h>

int main()
{
    float grade1, grade2, grade3, average;

    printf("Insert the values for grade 1, grade 2 and grade 3\n");
    printf("==========================\n");

    printf("Enter the grade 1 value: ");
    scanf("%f", &grade1);

    printf("Enter the grade 2 value: ");
    scanf("%f", &grade2);

    printf("Enter the grade 3 value: ");
    scanf("%f", &grade3);

    average = (grade1 + grade2 + grade3) / 3;

    printf("==========================\n");

    if (average >= 0.0 && average <= 2.99)
        printf("You failed\n");
    else if (average >= 3.0 && average <= 6.99)
        printf("You must retake the test\n");
    else
    {
        printf("You are approved\n");
    }

    printf("==========================\n");

    return 0;
}