#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, diff1, diff2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);

    diff1 = abs(100 - num1);
    diff2 = abs(100 - num2);
    system("cls");

    if (diff1 < diff2)
    {

        printf("%d is nearest to 100\n", num1);
    }
    else if (diff2 < diff1)
    {
        printf("%d is nearest to 100\n", num2);
    }
    else
    {
        printf("Both numbers are equal");
    }

    return 0;
}