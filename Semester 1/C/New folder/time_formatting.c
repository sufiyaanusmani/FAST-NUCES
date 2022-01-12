#include<stdio.h>

int main(){
	int hour, minute, second, remaining, user;
	
	printf("Enter time in seconds: ");
	scanf("%d", &user);
	
	hour = user / 3600;
	remaining = user % 3600;
	minute = remaining / 60;
	remaining = remaining % 60;
	second = remaining;
	
	printf("\n%d seconds is equivalent to %d hours %d minutes %d seconds",user, hour, minute, second);
	
	return 0;
}
