#include<stdio.h>

main(){
	float initial_salary, tax_rate, tax, final_salary;
	
	printf("Enter your salary: $ ");
	scanf("%f", &initial_salary);
	printf("\nEnter tax rate: ");
	scanf("%f", &tax_rate);
	
	tax = initial_salary * (tax_rate / 100);
	final_salary = initial_salary - tax;
	printf("\n--------------------------------\n");
	printf("\nTax: $ %.2f\n", tax);
	printf("\nSalary after tax: $ %.2f\n", final_salary);
}
