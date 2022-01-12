#include <stdio.h>

void recruitment(int, int);

int main(){
	int marks, experience;
	
	printf("Enter your marks: ");
	scanf("%d", &marks);
	printf("Enter your experience: ");
	scanf("%d", &experience);
	
	recruitment(marks, experience);
	
	return 0;
}

void recruitment(int marks, int experience){
	if(marks >= 70 && experience >= 2){
		printf("\nAssociate Developer");
	}else if(marks >= 60 && experience >= 1){
		printf("\nAssistant Developer");
	}else if(marks >= 50){
		printf("\nTrainee Engineer");
	}else{
		printf("\nNot eligible");
	}
}
