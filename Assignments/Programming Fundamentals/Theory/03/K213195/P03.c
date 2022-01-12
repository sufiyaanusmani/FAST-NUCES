#include <stdio.h>
#include <math.h>

int main(){
	int N, i, a, b, s, HCF, j;
	float factorial, series;
	factorial = 1;
	series = 1; // series starts with 1
	
	
	// calculating HCF of 42 and 98
	a = 42;
	b = 98;
	
	s = a<b?a:b;
	for(i=s;i>=1;i--){
		if(a%i==0 && b%i==0){
			HCF = i;
			break;
		}
	}
	
	for(i=1;i<HCF;i++){
		factorial = factorial * i;
		series = series + (pow(4, i)/factorial);
	}
	
	printf("%f", series);
	return 0;
}