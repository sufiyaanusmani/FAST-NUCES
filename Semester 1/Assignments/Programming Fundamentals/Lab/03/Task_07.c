#include<stdio.h>

main(){
	float principle, rate, time, interest;
	
		printf("Enter principle amount(between $100 to $1,000,000): $ ");
		scanf("%f", &principle);
		
		printf("Enter rate(between 5 to 10): ");
		scanf("%f", &rate);
		
		printf("Enter time period(in years between 1 to 10): ");
		scanf("%f", &time);
			
	interest = (principle * rate * time) / 100;

	printf("\n\nPrinciple Amount: $ %.2f", principle);
	printf("\nRate: %.2f", rate);
	printf("\nTime: %.2f", time);
	printf("\n\nInterest: $ %.2f", interest);
}
