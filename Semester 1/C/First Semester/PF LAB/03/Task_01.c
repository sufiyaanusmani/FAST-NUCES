#include<stdio.h>

main(){
	char d[100] = {"Introduction to IDE and basic programing constructs"};
	double a = 300000000;
	long int b = 300000000;
	double c = 7.0000000000005;
	
	printf("Q. Write the datatypes of the following values: ");
	
	printf("\n\nIntroduction to IDE and basic programing constructs");
	printf("\nAnswer: string or array of characters");
	
	printf("\n\n3x10(8)");
	printf("\nAnswer: double");
	
	printf("\n\n300000000");
	printf("\nAnswer: long int");
	
	printf("\n\n7.0000000000005");
	printf("\nAnswer: double");
	
	printf("\n\n%s", d);
	printf("\n%.0e", a);
	printf("\n%ld", b);
	printf("\n%.13Lf", c);
}

