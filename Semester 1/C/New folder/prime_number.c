#include <stdio.h>

int main()
{
    int isPrime = 1;
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
        }
    }

    if (num == 1 || isPrime == 0)
    {
        printf("\n%d is not a prime number\n", num);
    }
    else
    {
        printf("\n%d is a prime number\n", num);
    }
    return 0;
}