#include <stdio.h>

int main(){
	int originalPrice, dayNumber, i;
	float newPrice;
	
	printf("Enter original price: ");
	scanf("%d", &originalPrice);
	
	while(1){
		printf("Enter the day number: ");
		scanf("%d", &dayNumber);
		if(dayNumber >= 1 && dayNumber <= 5){
			break;
		}else{
			printf("Number must be between 1 and 5\n");
		}
	}	
	
	newPrice = originalPrice;

	for(i=1;i<=dayNumber;i++){
		newPrice = newPrice - (0.1 * newPrice);
	}
	
	printf("\n");
	
	switch(dayNumber){
		case 1:
			printf("Monday: %.2f", newPrice);
			break;
		case 2:
			printf("Tuesday: %.2f", newPrice);
			break;
		case 3:
			printf("Wednesday: %.2f", newPrice);
			break;
		case 4:
			printf("Thursday: %.2f", newPrice);
			break;
		case 5:
			printf("Friday: %.2f", newPrice);
			break;
	}
	return 0;
}
