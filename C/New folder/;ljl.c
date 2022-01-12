#include <stdio.h>
#include <math.h>

int find(int);

int main(){
	int binary, decimal;
	scanf("%d", &binary);
	decimal = find(binary);
	printf("Decimal: %d", decimal);
	return 0;
}

int find(int binary){
	static int i = 0, decimal = 0;
	int digit;
	if(binary != 0){
		digit = binary % 2;
		decimal = decimal + (digit * pow(2, i));
		i++;
		find(binary/10);
	}
	return decimal;
}