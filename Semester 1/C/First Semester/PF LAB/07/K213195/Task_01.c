#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, num, i, lessThanZero, isEqual, greaterThanZero;
    lessThanZero = isEqual = greaterThanZero = 0;

    printf("How many times you want to input a number?\n");
    scanf("%d", &t);
    system("cls");
    for (i = 1; i <= t; i++)
    {
        printf("Enter number: ");
        fflush(stdin);
        scanf("%d", &num);
        if (num < 0)
        {
            lessThanZero++;
        }
        else if (num == 0)
        {
            isEqual++;
        }
        else if (num > 0)
        {
            greaterThanZero++;
        }
    }
    system("cls");
    printf("Number less than zero     : %d\n", lessThanZero);
    printf("Numbers equal to zero     : %d\n", isEqual);
    printf("Numbers greater than zero : %d", greaterThanZero);
    return 0;
}