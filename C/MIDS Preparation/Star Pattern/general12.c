#include <stdio.h>

int main(){
	int i, j;
	char ch = 'D';
	
	for(i=1;i<=3;i++){
		for(j=1;j<=4;j++){
			printf("%d%c ", 9-2*j, ch-i);
		}
		printf("\n");
	}
	return 0;
}