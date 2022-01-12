#include <stdio.h>

int main(){
	int i, n, ans;
	ans = 0;
	
	printf("Enter value of n: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		if(i == 1 || i == 2){
			ans = 1;
		}else{
			ans = ans + (i - 2);
		}
		printf("%d ", ans);
	}
	return 0;
}

// 1 1 2 3 5 8 13
