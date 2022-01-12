#include <stdio.h>

int bin(int);
int binRec(int);

int main(){
	printf("Without recusrion: %d\n", bin(12));
	printf("With recursion: %d\n", binRec(12));
	return 0;
}

int bin(int num){
	int digit, binary, i;
	binary = 0;
	i = 1;
	
	while(num != 0){
		digit = num % 2;
		binary = binary + (digit * i);
		i *= 10;
		num /= 2;
	}
	
	return binary;
}

int binRec(int num){
	if(num == 0){
		return 0;
	}else{
		return((num % 2) + 10 * binRec(num / 2));
	}
}
