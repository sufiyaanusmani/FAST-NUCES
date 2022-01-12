#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	int age, i;
	char ch, ch1;
	
	for(i=1;i<=10;i++){
		printf("Enter your age: ");
		fflush(stdin);
		scanf("%d", &age);
		printf("Do you belong to urban or rural area (u/r): ");
		while(1){				// this loop will ensure either 'u' or 'r' is input
			ch1 = getch();
			if(ch1 == 'u' || ch1 == 'U' || ch1 == 'r' || ch1 == 'R'){
				ch = ch1;
				printf("%c", ch);
				break;
			}
		}
		
		if((age >= 18) && (ch == 'u' || ch == 'U')){
			printf("\nYOU ARE ELIGIBLE FOR A VACCINATION\n");
		}else{
			printf("\nYOU ARE NOT ELIGIBLE FOR A VACCINATION\n");
		}
		printf("\n");
	}
	
	return 0;
}