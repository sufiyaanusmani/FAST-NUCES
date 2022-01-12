#include <stdio.h>

void swapped(int *, int *, int *);

int main(){
	int a, b, c;
	printf("Enter three numbers separated by spaces: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Before Swapping : a = %d, b = %d, c = %d\n", a, b, c);
	swapped(&a, &b, &c);
	printf("After Swapping  : a = %d, b = %d, c = %d\n", a, b, c);
	return 0;
}

void swapped(int *aPtr, int *bPtr, int *cPtr){
	int temp;
	temp = *bPtr;
	*bPtr = *aPtr;
	*aPtr = *cPtr;
	*cPtr = temp;
}
