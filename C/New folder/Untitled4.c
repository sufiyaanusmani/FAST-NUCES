#include <stdio.h>
#include <math.h>

int main(){
	int i;
	
	printf("Enter situation: ");
	scanf("%d", &i);
	
	printf("%d", (i % 10000) / 1000);
	return 0;
}