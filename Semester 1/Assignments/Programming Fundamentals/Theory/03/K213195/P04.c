#include <stdio.h>

int main(){
	int sa_a, sa_b, time, largest;

	printf("Enter time taken for first car in minutes  : ");
	scanf("%d", &sa_a);
	printf("Enter time taken for second car in minutes : ");
	scanf("%d", &sa_b);
	
	largest = sa_a>sa_b?sa_a:sa_b;
	
	// calculating LCM
	while(1){
		if(largest%sa_a==0 && largest%sa_b==0){
			break;
		}
		largest++;
	}	
	
	printf("\nBoth cars will meet at %d minutes\n", largest);
	
	return 0;
}