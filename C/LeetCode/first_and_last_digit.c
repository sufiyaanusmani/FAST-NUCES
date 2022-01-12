#include <stdio.h>

int main(){
	int test, i, sum, first, last, num;
	
	scanf("%d", &test);
	
	for(i=1;i<=test;i++){
		sum = 0;
		scanf("%d", &num);
		last = num % 10;
		while(num > 9){
			num = num / 10;
		}
		first = num;
		sum = first + last;
		printf("%d\n", sum);
	}
	return 0;
}
