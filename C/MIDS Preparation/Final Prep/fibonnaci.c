#include <stdio.h>

int main(){
	int n, i, a, b, c;
	
	printf("Enter value of n: ");
	scanf("%d", &n);
	
	a = 0;
	b = 1;
	printf("%d, %d, ", a, b);
	for(i=3;i<n;i++){
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", c);
	}
	c = a + b;
	printf("%d", c);
	return 0;
}
