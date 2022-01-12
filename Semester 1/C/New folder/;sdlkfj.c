#include <stdio.h>

void find(int [], isize, int *, int *);

int main(){
	int arr[6] = {1, 3, 53, 242, 2, -4};
	int max, min, size;
	scanf("%d", &size)
	max = min = arr[0];
	find(arr, size, &max, &min);
	printf("Max: %d\nMin: %d", max, min);
	return 0;
}

void find(int arr[], size, int *max, int *min){
	static int i = 1;
	if(i < 6){
		if(arr[i] > *max){
			*max = arr[i];
		}
		if(arr[i] < *min){
			*min = arr[i];
		}
		i++;
		find(arr, size, max, min);
	}
}
