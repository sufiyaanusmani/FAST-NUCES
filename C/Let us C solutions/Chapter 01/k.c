#include <stdio.h>

int main(){
	int cash, hundred, fifty, ten;
	hundred = 0;
	fifty = 0;
	ten = 0;
	
	printf("Enter amount: ");
	scanf("%d", &cash);
	
	hundred = cash / 100;
	cash = cash - (hundred * 100);
	fifty = cash / 50;
	cash = cash - (fifty * 50);
	ten = cash / 10;
	
	printf("\n100: %d", hundred);
	printf("\n50 : %d", fifty);
	printf("\n10 : %d\n", ten);

	return 0;
}
