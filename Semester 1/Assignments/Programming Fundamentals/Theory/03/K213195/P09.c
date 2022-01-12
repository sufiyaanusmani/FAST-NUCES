#include <stdio.h>

int main(){
	int i, j, num;
	char ch;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("\n");
	
	for(i=1;i<=num;i++){
		ch = 'a';
		for(j=1;j<=num;j++){
			if(j<=i){
				printf("%c", ch);
				ch++;
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}