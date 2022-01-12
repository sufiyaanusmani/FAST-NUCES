#include <stdio.h>

int main()
{
    int isPrime;
    for (int i = 1; i <= 300; i++)
    {
        isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }   
        }
        if(isPrime == 1){
            printf("%d\n", i);
        }
    }
    return 0;
}