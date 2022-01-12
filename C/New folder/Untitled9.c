#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print(int, int);

int main(){
	int n;
	scanf("%d", &n);
	print(n, 1);
	return 0;
}

void print(int n, int i){
	if(i<=n){
		printf("%d  ", i);
	}
	print(n, ++i);
}
