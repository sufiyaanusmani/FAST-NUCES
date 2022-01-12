#include <stdio.h>

int main(){
	int std1[5] = {60, 75, 85, 95, 49};
	int std2[5] = {59, 70, 65, 45, 39};
	float std1Mean, std2Mean, covariance, sum;
	int i, std1Total, std2Total;
	std1Total = std2Total = 0;
	
	for(i=0;i<5;i++){
		std1Total += std1[i];
		std2Total += std2[i];
	}
	
	std1Mean = std1Total / 5.0;
	std2Mean = std2Total / 5.0;
	
	for(i=0;i<5;i++){
		sum = sum + ((std1[i] - std1Mean) * (std2[i] - std2Mean));
	}
	
	covariance = sum / 5;
	
	printf("Covariance: %.2f\n", covariance);
	return 0;
}
