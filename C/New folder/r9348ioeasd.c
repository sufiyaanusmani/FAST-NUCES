#include <stdio.h>

void sum(int [], int *, int *);

int main(){
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int even, odd;
	even = odd = 0;
	sum(arr, &even, &odd);
	printf("Even Sum: %d\nOdd Sum: %d\n", even, odd);
	return 0;
}

void sum(int arr[6], int *even, int *odd){
	static int i = 0;
	if(i < 6){
		if(i % 2 == 0){
			*even = *even + arr[i];
		}else{
			*odd = *odd + arr[i];
		}
		i++;
		sum(arr, even, odd);
	}
}
