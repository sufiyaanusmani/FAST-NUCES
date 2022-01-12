#include <stdio.h>

int cal(int);

int main(){
	int num, bin;
	scanf("%d", &num);
	printf("%d", cal(num));
	return 0;
}

int cal(int bin){
	if(bin == 0){
		return 0;
	}else{
		return((bin%2) + 10*cal(bin / 2));
	}
}
// digit = binary % 10
// binary = binary + ((binary%10)*i)
// binary = binary / 10