#include<stdio.h>

main(){
	int num1, num2, temp;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("\nEnter second number: ");
	scanf("%d", &num2);
	
	printf("\n\n\nValue of first number before swapping: %4d", num1);
	printf("\nValue of second number before swapping: %3d", num2);
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	printf("\n\nValue of first number after swapping: %5d", num1);
	printf("\nValue of second number after swapping: %4d", num2);
}
