#include <stdio.h>

int main(){
	int arr[5], rev[5], i;
	int *ptrA, *ptrR;
	ptrA = arr;
	ptrR = rev;
	for(i=0;i<5;i++){
		scanf("%d", (ptrA+i));
	}
	for(i=0;i<5;i++){
		*(ptrR + i) = *((ptrA + 5) - 1 - i);		// rev[i] = arr[5 - 1 - i]
	}
	
	for(i=0;i<5;i++){
		printf("%d  ", rev[i]);
		
	}
	return 0;
}
