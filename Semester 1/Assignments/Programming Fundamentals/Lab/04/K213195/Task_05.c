#include <stdio.h>

int main(){
	int original_price, discounted_price_total, individual ;
	original_price = 1250;
	individual = 0.8 * original_price;
	discounted_price_total = 4 * individual;
	
	printf("Total amount of 4 tickets after discount: PKR %d", discounted_price_total);
	printf("\nTicket price for an individual: PKR %d", individual);
	
	return 0; 
}
