#include <stdio.h>

float average(int, int, int);
float percentage(int, int, int);

int main() {
	int marks1, marks2, marks3;
	float avg, per;

	while(1) {
		printf("Enter your marks for three subjects separated by space (each subject is out of 20 marks) : ");
		scanf("%d %d %d", &marks1, &marks2, &marks3);
		if((marks1 <= 20 && marks2 <= 20 && marks3 <= 20) && (marks1 >= 0 && marks2 >= 0 && marks3 >= 0)) {
			break;
		} else {
			printf("\n\aERROR: marks must be between 0 and 20\n\n");
		}
	}

	avg = average(marks1, marks2, marks3);
	per = percentage(marks1, marks2, marks3);

	printf("\nAverage  : %.2f\n", avg);
	printf("Percentage : %.2f %%\n", per);

	return 0;
}

float average(int a, int b, int c) {
	float k;
	k = (a + b + c) / 3.0;
	return k;
}

float percentage(int x, int y, int z) {
	float j;
	j = ((x + y + z) / 60.0) * 100;
	return j;
}
