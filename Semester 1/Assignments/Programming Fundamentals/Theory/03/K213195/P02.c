#include <stdio.h>
#include <math.h>

int main(){
	int birthYear, studentID, n, i, a, b, c;
	
	while(1){
		printf("Enter your birth year: ");
		scanf("%d", &birthYear);
		if(birthYear >= 1000 && birthYear <= 9999){
			break;
		}else{
			printf("ERROR! birth year must be of four digits. Please enter a valid year\n");
		}
	}
	printf("Enter your student ID: ");
	scanf("%d", &studentID);
	
	n = ((birthYear % 10000) / 1000) + (studentID % 10) + pow(2, 5);
	
	a = 0;
	b = 1;
	c = a + b;
	
	printf("\n+%d, +%d, ", a, b);
	
	for(i=3;i<n;i++){
		printf("+%d, ", c);
		a = b;
		b = c;
		c = a + b;
	} 
	
	printf("+%d\n", c);			// this is used outside the loop to remove comma after the last term of the series
	
	return 0;
}