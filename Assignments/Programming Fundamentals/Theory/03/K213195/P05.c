#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	int i, msd, N, rX, rY, xCoordinate, yCoordinate, randomNumber;
	unsigned long long int mobileNumber;
	float distance;
	rX = 1;
	rY = 3;
	
	srand(time(0));
	
	while(1){
		printf("Enter your mobile number(11 digits): ");
		scanf("%llu", &mobileNumber);			// mobile number has 11 digits
		if((mobileNumber >= 10000000000) && (mobileNumber <= 99999999999)){
			break;
		}else{
			printf("Error: Please enter a valid mobile number\n\n");
		}
	}
		
	while(mobileNumber != 0){
		msd = mobileNumber % 10;
		mobileNumber = mobileNumber / 10;
	}
	
	
	
	if(msd == 0){
		N = ((pow(2, msd)) * 4) + 3;
	}else{
		N = (pow(2, msd)) * 0.0625;
	}
	
	printf("Value of N: %d\n", N);
	
	printf("\n");
	for(i=1;i<=N;i++){
		// coordinates lies between 1-20
		xCoordinate = (rand() % 20) + 1;
		yCoordinate = (rand() % 20) + 1;
		distance = sqrt(pow((xCoordinate - rX), 2) + pow((yCoordinate - rY), 2));
		printf("R(1, 3) and (%d, %d)\n", xCoordinate, yCoordinate);
		printf("Distance: %.2f\n\n", distance);
	}
	
	return 0;
}