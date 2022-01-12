#include <stdio.h>

int main(){
	int sellingPrice, profit, costPrice;
	
	printf("Enter Selling price of 15 items: ");
	scanf("%d", &sellingPrice);
	printf("\nEnter Profit: ");
	scanf("%d", &profit);
	
	costPrice = (sellingPrice - profit) / 15;
	printf("\n\nCost price of one item: %d", costPrice);
	return 0;
}
