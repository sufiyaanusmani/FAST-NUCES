#include <stdio.h>

int main()
{
	int isPrime, num, i;
	isPrime = 1;

	printf("Enter a number: ");
	scanf(" %d", &num);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	if (isPrime == 0 || num <= 1)
	{
		printf("\n%d is not a prime number\n", num);
	}
	else
	{
		printf("\n%d is a prime number\n", num);
		for (i = num; i >= -3; i--)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
