#include <stdio.h>

void swap(int *, int *);

int main(){
	int a, b;
	printf("Enter a and b: ");
	scanf("%d %d", &a, &b);
	printf("\n\nBefore swap: %d %d\n", a, b);
	swap(&a, &b);
	printf("After swap: %d %d", a, b);	
	return 0;
}

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
