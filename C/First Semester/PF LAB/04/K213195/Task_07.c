#include <stdio.h>

int main(){
	float matric, inter, test, merit;
	
	printf("Enter matriculation marks (out of 1100): ");
	scanf("%f", &matric);
	printf("Enter intermediate marks (out of 1200): ");
	scanf("%f", &inter);
	printf("Enter admission test marks (out of 100): ");
	scanf("%f", &test);
	
	merit = (0.2*matric) + (0.2*inter) + (0.6*test);
	
	printf("\n\nMerit: %.2f", merit);
	return 0;
}
