#include <stdio.h>

int sumOfDigits(int);

int main() {
	int num, sum;

	// the following loop is used to ensure that only 5 digit number is entered
	while(1) {
		printf("Enter a five digit number: ");
		scanf("%d", &num);
		if(num >= 10000 && num <= 99999) {
			break;
		} else {
			printf("\n\aERROR: please enter a 5 digit number\n\n");
		}
	}
	sum = sumOfDigits(num);

	printf("\nSum of digits of %d: %d\n", num, sum);

	return 0;
}

int sumOfDigits(int x) {
	if(x == 0) {
		return 0;
	} else {
		return((x % 10) + sumOfDigits(x / 10));
	}
}