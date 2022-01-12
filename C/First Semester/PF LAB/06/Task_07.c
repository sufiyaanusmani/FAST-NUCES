#include <stdio.h>

int main(){
	float const PI = 3.14159;
	float area, radius, l1, l2;
	int choice;
	
	printf("%50s", "***** Area Program *****");
	printf("\n0. Square\n1. Circle\n2. Right Angle Triangle\n3. Parallelogram\n\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 0:
			printf("\nEnter length of square: ");
			scanf("%f", &l1);
			area = (float)l1 * l1;
			printf("\nArea: %.2f", area);
			break;
		case 1: 
			printf("\nEnter radius of circle: ");
			scanf("%f", &radius);
			area = PI * radius * radius;
			printf("\nArea: %.2f", area);
			break;
		case 2:
			printf("\nEnter length of base: ");
			scanf("%f", &l1);
			printf("Enter length of height: ");
			scanf("%f", &l2);
			area = 0.5 * l1 * l2;
			printf("\nArea: %.2f", area);
			break;
		case 3:
			printf("\nEnter length of base: ");
			scanf("%f", &l1);
			printf("Enter length of height: ");
			scanf("%f", &l2);
			area = (float)l1 * l2;
			printf("\nArea: %.2f", area);
			break;
		default:
			printf("\nERROR! Wrong choice entered\n");
	}
	

	
	return 0;
}