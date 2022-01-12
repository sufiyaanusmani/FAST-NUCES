#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num, count;
    count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 1)
    {
        printf("\nError");
        getch();
        exit(0);
    }

    printf("\nInitial value is %d", num);
    do
    {
        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num = num * 3 + 1;
        }
        printf("\nNext value is %d", num);
        count = count + 1;
    } while (num != 1);

    printf("\nFinal value is %d, number of steps %d", num, count);
    return 0;
}