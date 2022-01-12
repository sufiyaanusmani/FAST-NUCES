#include <stdio.h>
#include <math.h>

int calculate(int);

int main(){
	int num, ans;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	ans = calculate(num);
	
	printf("Sum: %d", ans);
	
	return 0;
}

int calculate(int n){
	int sum, i;
	sum = 0;
	
	for(i=1;i<=n;i++){
		sum = sum + pow(i, 3);
	}
	
	return sum;
}