#include <stdio.h>

int main(){
	int time, hours, minutes, seconds, remaining;
	
	printf("Enter time in seconds: ");
	scanf("%d", &time);
	
	hours = time / 3600;
	remaining = time % 3600;
	minutes = remaining / 60;
	seconds = remaining % 60;
	
	printf("%d hours, %d minutes, and %d seconds\n", hours, minutes, seconds);
	
	return 0;
}