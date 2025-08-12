#include <stdio.h>

int main(){

    int currentYear, birthYear;

    printf("what year were you born: ");
    scanf("%d",&birthYear);
    printf("What's the current year: ");
    scanf("%d",&currentYear);

    int age = currentYear - birthYear;
    int ageIn2050 = age + (2050 - currentYear);
    printf("-------------------\n");

    printf("You are %d years old\n",age);
    printf("You will be %d in 2050\n",ageIn2050);

    printf("-------------------\n");

}