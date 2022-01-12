#include <stdio.h>

int main()
{
    int num, d1, d2, d3, d4, d5, reverse, temp;

    printf("Enter a five digit positive integer: ");
    scanf("%d", &num);
    temp = num;
    if (temp > 0 && (temp > 9999) && (temp <= 99999))
    {
        d5 = temp % 10; //to separate fifth digit
        temp = temp / 10;
        d4 = temp % 10; //to separate fourth digit
        temp = temp / 10;
        d3 = temp % 10; //to separate third digit
        temp = temp / 10;
        d2 = temp % 10; //to separate second digit
        temp = temp / 10;
        d1 = temp; //to separate first digit

        reverse = (d5 * 10000) + (d4 * 1000) + (d3 * 100) + (d2 * 10) + (d1); //reversed number

        //comparing both numbers
        if (num == reverse)
        {
            printf("It is a palindrome");
        }
        else
        {
            printf("It is not a palindrome");
        }
    }else{
        printf("\nError! Invalid input. Please try again\n");
    }
    return 0;
}