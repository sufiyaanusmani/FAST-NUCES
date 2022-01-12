#include <stdio.h>

int main(){
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("%s\n", (num>0?"POSITIVE":(num<0?"NEGATIVE":"ZERO")));
	return 0;
}
