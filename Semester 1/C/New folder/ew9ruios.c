#include <stdio.h>

int main(){
	int arr[5][3] = {
						{33, 3, 159},
						{234, 122, 351},
						{100, 140, 19},
						{53, 310, 76},
						{111, 2, 4}
	};
	float utilization[5][3];
	int branch[5] = {0};
	int i, j;
	int max, min, maxD, minD;
	int profit[5] = {0};
	float m;
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			profit[i] += arr[i][j];
		}
	}
	max = profit[0];
	min = profit[0];
	maxD = 0;
	minD = 0;
	for(i=1;i<5;i++){
		if(profit[i] > max){
			max = profit[i];
			maxD = i+1;
		}
		if(profit[i] < min){
			min = profit[i];
			minD = i+1;
		}
	}
	
	printf("PART A\nDistrict %d got most profit\n", maxD);
	printf("PART B\nDistrict %d got least profit\n\n", minD);
	
	for(i=0;i<5;i++){
		printf("District %d: %d\n", i+1, profit[i]);
	}
	
	for(i=0;i<5;i++){
		utilization[i][0] = arr[i][0] / 300.0;
		utilization[i][1] = arr[i][1] / 500.0;
		utilization[i][2] = arr[i][2] / 200.0;
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%f  ", utilization[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++){
		m = utilization[i][0];
		for(j=0;j<3;j++){
			if(utilization[i][j] > m){
				m = utilization[i][j];
				branch[i] = j + 1;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("Branch %d: %d\n", i+1, branch[i]);
	}
	return 0;
}
