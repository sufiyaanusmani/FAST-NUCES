#include <stdio.h>

int main(){
	int i = 0;
	
	printf("%12s %12s\n", "ASCII VALUE", "CHARACTER");
	while(i<=255){
		printf("%12d %12c\n", i, i);
		i++;
	}
	
	return 0;
}