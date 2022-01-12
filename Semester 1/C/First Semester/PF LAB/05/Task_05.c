#include <stdio.h>

int main(){
	int secondsInput, d, s, h, m, temp;
	
	printf("Enter time in seconds: ");
	scanf("%d", &secondsInput);
	
	temp = secondsInput;
	
	d = temp / 86400;
	temp = temp % 86400;
	h = temp / 3600;
	temp = temp % 3600;
	m = temp / 60;
	s = temp % 60;
	
	printf("\n%d seconds is equivalent to %d days, %d hours, %d minutes, %d seconds", secondsInput, d, h, m, s);
	
	return 0;
}
