#include <stdio.h>

int main(){
	int x, y, i, ans;
	ans = 1;
	
	printf("Enter base and exponent: ");
	scanf("%d %d", &x, &y);
	
	for(i=1;i<=y;i++){
		ans = ans * x;
	}
	
	printf("\nAns: %d", ans);
	return 0;
}