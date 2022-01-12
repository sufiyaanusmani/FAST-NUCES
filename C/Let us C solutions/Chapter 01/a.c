#include <stdio.h>

int main(){
	int basicSalary;
	float grossSalary;
	
	printf("Enter basic salary: $ ");
	scanf("%d", &basicSalary);
	
	grossSalary = ((float)basicSalary * 0.4) + ((float)basicSalary * 0.2) + basicSalary;
	
	printf("\nGross Salary: $ %.2f\n", grossSalary);
	getch();
	
	return 0;
}
