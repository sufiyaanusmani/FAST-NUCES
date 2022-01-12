#include <stdio.h>

int main(){
	int test, i, factorial, num, j;
	scanf("%d", &test);
	
	for(i=1;i<=test;i++){
		factorial = 1;
		scanf("%d", &num);
		for(j=1;j<=num;j++){
			if(num == 0){
				break;
			}
			factorial *= j;
		}
		printf("%d\n", factorial);
	}
	return 0;
}
