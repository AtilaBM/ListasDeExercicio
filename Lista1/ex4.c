#include <stdio.h>

int main(){
    int salary;

    printf("Insert the values for salary.\n");
    printf("-------------------------\n");

    printf("salary: ");
    scanf("%d",&salary);
    
    

    float newSalary = salary + (salary * 0.25);
    printf("-------------------------\n");

    printf("The new salary is %.2f \n",newSalary);

    return 0;
}