#include <stdio.h>

int WithoutRecursion(int x);
int WithRecursion(int x);

int main()
{
    int num;
    printf("Enter a five digit number: ");
    scanf(" %d", &num);

    printf("\nSum of digits without using recursion: %d", WithoutRecursion(num));
    printf("\nSum of digits using recursion: %d", WithRecursion(num));
    return 0;
}

int WithoutRecursion(int x)
{
    int total = 0;
    for (int i = 1; i <= 5; i++)
    {
        total = total + (x % 10);
        x = x / 10;
    }
    return total;
}

int WithRecursion(int x)
{
    int total;
    if (x == 0)
    {
        return 0;
    }
    else
    {
        total = (x % 10) + WithRecursion(x / 10);
        return total;
    }
}