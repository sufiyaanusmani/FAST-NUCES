#include <stdio.h>
#include <conio.h>

int main(){
	int sub1, sub2, sub3, sub4, sub5, total;
	float percentage;
	
	textcolor(BLUE);
	printf("Enter marks for subject 1: ");
	scanf("%d", &sub1);
	printf("Enter marks for subject 2: ");
	scanf("%d", &sub2);
	printf("Enter marks for subject 3: ");
	scanf("%d", &sub3);
	printf("Enter marks for subject 4: ");
	scanf("%d", &sub4);
	printf("Enter marks for subject 5: ");
	scanf("%d", &sub5);
	
	total = sub1 + sub2 + sub3 + sub4 + sub5;
	percentage = (float)total / 5;
	
	printf("\n\nAggregate marks  :  %d / 500", total);
	printf("\nPercentage       :  %.2f", percentage);
	
	return 0;
}
