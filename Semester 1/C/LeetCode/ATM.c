#include <stdio.h>

int main(){
	int transaction;
	float bankCharges = 0.5, newBalance, previousBalance, totalCharges;

	
	scanf("%d %f", &transaction, &previousBalance);
	newBalance = previousBalance;
	totalCharges = transaction + bankCharges;
	
	if(totalCharges <= previousBalance && transaction%5==0){
		newBalance = previousBalance - totalCharges;
		printf("%.2f", newBalance);
	}else{
		printf("%.2f", newBalance);
	}
	return 0;
}
