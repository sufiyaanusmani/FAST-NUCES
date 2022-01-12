#include <stdio.h>

int main(){
	int i;
	float arr[20], max1, max2;
	float *ptr;
	max1 = max2 = -999.0;
	
	ptr = &arr[0];
	for(i=0;i<20;i++){
		printf("%d. Enter number: ", i+1);
		scanf("%f", ptr+i);
	}
	
	max1 = arr[0];
	for(i=0;i<20;i++){
		if(*(ptr + i) > max1){		// checking largest element
			max1 = *(ptr + i);
		}
	}

	for(i=0;i<20;i++){
		if((*(ptr + i) > max2) && (*(ptr + i) < max1)){  // checking second largest element
			max2 = *(ptr + i);
		}
	}
	
	printf("Second Highest Number: %.2f", max2);
	
	return 0;
}
