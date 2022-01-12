#include <stdio.h>

int main(){
	int num = 100, i;
	
	for(i=num;1;i--){
		printf("var: %d\n", i);
		if(i == 88){
			break;
		}
	}
	
	printf("\nOut of for loop\n");
	
	return 0;
}
