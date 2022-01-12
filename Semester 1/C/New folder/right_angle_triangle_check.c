#include <stdio.h>

int main(){
	int a, b, c;
	
	printf("Enter sides of triangle: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(c*c == a*a + b*b || a*a == b*b + c*c || b*b == a*a + c*c){
		printf("\nRight angled triangle\n");
	}else{
		printf("\nNot a right angled triangle\n");
	}
	
	return 0;
}
