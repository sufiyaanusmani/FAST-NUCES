#include <stdio.h>

struct Results{
	float average;
	float percentage;
};
struct Results marks, result;

struct Results calculate(int, int, int);

int main() {
	int marks1, marks2, marks3;

	while(1) {
		printf("Enter your marks for three subjects separated by space (each subject is out of 20 marks) : ");
		scanf("%d %d %d", &marks1, &marks2, &marks3);
		if((marks1 <= 20 && marks2 <= 20 && marks3 <= 20) && (marks1 >= 0 && marks2 >= 0 && marks3 >= 0)) {
			break;
		} else {
			printf("\n\aERROR: marks must be between 0 and 20\n\n");
		}
	}

	result = calculate(marks1, marks2, marks3);

	printf("\nAverage  : %.2f\n", result.average);
	printf("Percentage : %.2f %%\n", result.percentage);

	return 0;
}

struct Results calculate(int a, int b, int c){
	marks.average = (a + b + c) / 3.0;
	marks.percentage = ((a + b + c) / 60.0) * 100;
	return marks;
}
