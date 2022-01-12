#include <stdio.h>
#include <stdlib.h>

int main() {
	int size, i, largest, secondLargest;
	float *marks;
	scanf("%d", &size);
	marks = (float *)malloc(size * sizeof(float));
	for(i=0;i<size;i++){
		scanf("%f", marks+i);
	}
	largest = *marks;
	secondLargest = *marks;
	for(i=0;i<size;i++){
		if(*(marks+i) > largest){
			largest = *(marks+i);
		}
	}
	for(i=0;i<size;i++){
		if(*(marks+i) > secondLargest && *(marks+i) < largest){
			secondLargest = *(marks+i);
		}
	}
	printf("Second Largest: %d", secondLargest);
	free(marks);
	return 0;
}