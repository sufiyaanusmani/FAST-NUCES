#include <stdio.h>

int main(){
	int a, b, sum, test, i;
	
	scanf("%d", &test);
	
	for(i=1;i<=test;i++){
		scanf("%d %d", &a, &b);
		sum = a + b;
		printf("%d\n", sum);
	}
	
	return 0;
}
