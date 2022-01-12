#include <stdio.h>

int main(){
    int basic_salary;
    float gross_salary;

    printf("Enter your base salary: ");
    scanf("%d", &basic_salary);

    gross_salary = (float)basic_salary + (0.4 * (float)basic_salary) + (0.2 * (float)basic_salary);

    printf("\nGross Salary: $ %.2f", gross_salary);
    return 0;
}