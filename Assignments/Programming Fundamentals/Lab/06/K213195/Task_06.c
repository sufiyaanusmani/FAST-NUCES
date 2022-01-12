#include <stdio.h>

int main(){
	int age, experience;
	char education;
	int check = 0;
	
	printf("Enter age: ");
	scanf("%d", &age);
	printf("Enter education (B:Bachelors, M:Masters): ");
	scanf(" %c", &education);
	printf("Enter experience in years: ");
	scanf("%d", &experience);
	
	printf("\nPosts:\n");
	if((age >= 22 && age <= 29) && (education == 'B') && (experience >= 0 && experience <= 2)){
		printf("Clerk\n");
		check = 1;
	}
	if((age >= 25 && age <= 32) && (education == 'M') && (experience >= 3 && experience <= 5)){
		printf("Economist\n");
		check = 1;
	}
	if((age >= 30 && age <= 35) && (education == 'M') && (experience >= 4 && experience <= 7)){
		printf("Treasurer\n");
		check = 1;
	}
	if((age >= 32 && age <= 40) && (education == 'M') && (experience >= 7 && experience <= 10)){
		printf("Chief for Economic Policy");
		check = 1;
	}

	if(check == 0){
		printf("You are not eligible for any post");
	}
	return 0;
}
