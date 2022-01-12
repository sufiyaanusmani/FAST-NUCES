#include <stdio.h>

int main(){
	int num, power, ans, i;
	ans = 1;
	
	printf("Enter a number and its power: ");
	scanf("%d %d", &num, &power);
	
	for(i=1;i<=power;i++){
		ans *= num;
	}
	
	printf("Answer: %d", ans);
	
	
	return 0;
}