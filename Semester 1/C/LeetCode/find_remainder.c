#include <stdio.h>

int main(){
	int test, a, b, answer, i;
	
	scanf("%d", &test);
	
	for(i=1;i<=test;i++){
		scanf("%d %d", &a, &b);
		answer = a % b;
		printf("%d\n", answer);
	}
	return 0;
}
