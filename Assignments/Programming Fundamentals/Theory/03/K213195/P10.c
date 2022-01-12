// source: https://www.mathsisfun.com/pythagorean_triples.html
#include <stdio.h>
#include <math.h>

int main(){
	int age, a, b;
	float c;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("\n");
	
	for(a=1;a<=age;a++){
		for(b=a;b<=age;b++){
			c = sqrt((a * a) + (b * b));
			if(c == (int)c){
			printf("(%d, %d, %d)\n", a, b, (int)c);
			}
		}
	}
	
	return 0;
}
		