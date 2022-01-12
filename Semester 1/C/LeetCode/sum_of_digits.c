#include <stdio.h>

int main(){
	int num, test, i, sum;
	scanf("%d", &test);
	
	for(i=1;i<=test;i++){
		sum = 0;
		scanf("%d", &num);
		do{
			sum = sum + (num%10);
			num = num / 10;
		}while(num != 0);
		printf("%d\n", sum);
	}
	return 0;
}
