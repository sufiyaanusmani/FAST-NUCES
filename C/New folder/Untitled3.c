#include <stdio.h>

void checkWinner1(int [][4]);
void checkWinner2(int [][4]);
int checkWinner3(int [][4]);

int main(){
	int max;
	int arr[5][4] = {
							{192, 48, 206, 37},
							{147, 90, 312, 21},
							{186, 12, 121, 38},
							{114, 21, 408, 39},
							{267, 13, 382, 29}
	};
	checkWinner1(arr);
	checkWinner2(arr);
	max = checkWinner3(arr);
	printf("%d", max);
	return 0;
}

void checkWinner1(int arr[5][4]){
	int largest, i, j, candidate;
	for(i=0;i<5;i++){
		largest = arr[i][0];
		candidate = 1;
		for(j=0;j<4;j++){
			if(arr[i][j] > largest){
				largest = arr[i][j];
				candidate = j + 1;
			}
		}
		printf("Area %d: Candidate %d\n", i+1, candidate);
	}
}

void checkWinner2(int arr[5][4]){
	int i, j, total;
	for(i=0;i<4;i++){
		total = 0;
		for(j=0;j<5;j++){
			total += arr[j][i];
		}
		printf("Candidate %d: total votes %d\n", i+1, total);
	}
}

int checkWinner3(int arr[5][4]){
	int i, j, largest, maxArea;
	int total[5] = {0};
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			total[i] += arr[i][j];
		}
	}
	largest = total[0];
	maxArea = 1;
	for(i=0;i<5;i++){
		if(total[i] > largest){
			largest = total[i];
			maxArea = i + 1;
		}
	}
	return maxArea;
}