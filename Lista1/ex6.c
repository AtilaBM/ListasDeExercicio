#include <stdio.h>

int main(){
    int salary; 
    float bonus = 0.05, tax = 0.07;

    printf("Insert the value for salary.\n");
    printf("-------------------------\n");

    printf("salary: ");
    scanf("%d",&salary);
    
    
    float bonusValue = salary * bonus;
    float taxValue = salary * tax;
    float newSalary = (salary + bonusValue)- taxValue;
    printf("-------------------------\n");

    printf("The new salary with bonus: 5%% and tax: 7%% is $%.2f \n",newSalary);
    //printf("Salary without tax: $%.2f \n",salary + bonusValue);
    return 0;
}