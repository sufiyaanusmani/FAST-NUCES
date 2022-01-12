#include <stdio.h>
#include <math.h>

int main(){
	int choice, num1, num2;
	printf("-------------------------------------------\n");
	printf("|   OPTIONS   |  OPERATIONS                |\n");
	printf("-------------------------------------------\n");
	printf("|      1      |  Addition(+)               |\n");
	printf("|      2      |  Multiplication(*)         |\n");
	printf("|      3      |  Mod(%%)                     |\n");
	printf("|      4      |  PreIncrement(++)          |\n");
	printf("|      5      |  PostDecrement(--)         |\n");
	printf("|      6      |  Greater Than(>)           |\n");
	printf("|      7      |  Greater and Equals to(>=) |\n");
	printf("|      8      |  Less than(<)              |\n");
	printf("|      9      |  Less and Equal to(<=)     |\n");
	printf("|      10     |  Is Equal to(==)           |\n");
	printf("|      11     |  Not Equal to(!=)          |\n");
	printf("|      12     |  Power(x^y)                |\n");
	printf("|      13     |  Square Root(x)            |\n");
	printf("--------------------------------------------\n");
	printf("ENTER OPTION: ");
	scanf("%d", &choice);
	printf("--------------------------------------------\n\n");
	
	switch(choice)
	{
		case 1:
			printf("Enter first number : ");
			scanf("%d", &num1);
			printf("Enter second number: ");
			scanf("%d", &num2);
			printf("\nAnswer: %d", num1+num2);
			break;
		case 2:
			printf("Enter first number : ");
			scanf("%d", &num1);
			printf("Enter second number: ");
			scanf("%d", &num2);
			printf("\nAnswer: %d", num1*num2);
			break;
		case 3:
			printf("Enter first number : ");
			scanf("%d", &num1);
			printf("Enter second number: ");
			scanf("%d", &num2);
			printf("\nAnswer: %d", num1%num2);
			break;
		case 4:
			printf("Enter a number : ");
			scanf("%d", &num1);
			printf("\nAnswer: %d", ++num1);
			break;
		case 5:
			printf("Enter a number : ");
			scanf("%d", &num1);
			printf("\nAnswer: %d", num1--);
			break;
		case 6:
			printf("Enter first number : ");
			scanf("%d", &num1);
			printf("Enter second number: ");
			scanf("%d", &num2);
			if(num1 > num2)
			{
				printf("\n%d is greater than %d", num1, num2);
			}
			break;
		case 7:
			printf("Enter first number : ");
			scanf("%d", &num1);
			printf("Enter second number: ");
			scanf("%d", &num2);
			if(num1 >= num2)
			{
				printf("\n%d is greater than or equals to %d", num1, num2);
			}
			break;
		case 8:
			printf("Enter first number : ");
			scanf("%d", &num1);
			printf("Enter second number: ");
			scanf("%d", &num2);
			printf("\nAnswer: %d", num1+num2);
			if(num1 < num2)
			{
				printf("\n%d is less than %d", num1, num2);
			}
			break;
		case 9:
			printf("Enter first number : ");
			scanf("%d", &num1);
			printf("Enter second number: ");
			scanf("%d", &num2);
			if(num1 <= num2)
			{
				printf("\n%d is less than or equals to %d", num1, num2);
			}
			break;
		case 10:
			printf("Enter first number : ");
			scanf("%d", &num1);
			printf("Enter second number: ");
			scanf("%d", &num2);
			if(num1 == num2)
			{
				printf("\n%d is equal to %d", num1, num2);
			}
			break;
		case 11:
			printf("Enter first number : ");
			scanf("%d", &num1);
			printf("Enter second number: ");
			scanf("%d", &num2);
			if(num1 != num2)
			{
				printf("\n%d is not equal to %d", num1, num2);
			}
			break;
		case 12:
			printf("Enter a number : ");
			scanf("%d", &num1);
			printf("Enter its power: ");
			scanf("%d", &num2);
			printf("\nAnswer: %d", pow(num1, num2));
			break;
		case 13:
			printf("Enter a number : ");
			scanf("%d", &num1);
			printf("\nAnswer: %.2f", sqrt((float)num1));
			break;
		default:
			printf("\nInvalid Option Entered\n");
		
	}
	return 0;
}
