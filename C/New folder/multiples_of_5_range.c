#include <stdio.h>

int main(){
	int start, end, count, i;
	count = 0;
	printf("Enter starting and ending number: ");
	scanf("%d %d", &start, &end);
	
	for(i=start;i<=end;i++){
		if(i % 5 == 0){
			count++;
		}
	}
	
	printf("\nCount: %d", count);
	
	return 0;
}
