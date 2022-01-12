#include <stdio.h>

int main()
{
    int noOfDigits, num1, num2, answer;
    char ch1, ch2;
    printf("How many characters are there in your Roman Number? ");
    scanf("%d", &noOfDigits);

    if (noOfDigits == 1 || noOfDigits == 2)
    {
        switch (noOfDigits)
        {
        case 1:
            printf("\nEnter the first character: ");
            scanf(" %c", &ch1);
            switch (ch1)
            {
            case 'I':
                answer = 1;
                break;
            case 'V':
                answer = 5;
                break;
            case 'X':
                answer = 10;
                break;
            case 'L':
                answer = 50;
                break;
            case 'C':
                answer = 100;
                break;
            case 'D':
                answer = 500;
                break;
            case 'M':
                answer = 1000;
                break;
            }
            break;
        case 2:
            printf("\nEnter the first character: ");
            scanf(" %c", &ch1);
            printf("Enter the second character: ");
            scanf(" %c", &ch2);

            switch (ch1)
            {
            case 'I':
                num1 = 1;
                break;
            case 'V':
                num1 = 5;
                break;
            case 'X':
                num1 = 10;
                break;
            case 'L':
                num1 = 50;
                break;
            case 'C':
                num1 = 100;
                break;
            case 'D':
                num1 = 500;
                break;
            case 'M':
                num1 = 1000;
                break;
            }
            switch (ch2)
            {
            case 'I':
                num2 = 1;
                break;
            case 'V':
                num2 = 5;
                break;
            case 'X':
                num2 = 10;
                break;
            case 'L':
                num2 = 50;
                break;
            case 'C':
                num2 = 100;
                break;
            case 'D':
                num2 = 500;
                break;
            case 'M':
                num2 = 1000;
                break;
            }

            if (num1 < num2)
            {
                answer = num2 - num1;
            }
            else if (num1 >= num2)
            {
                answer = num1 + num2;
            }
            break;
        }
    }
    else
    {
        printf("\nERROR! Enter 1 or 2 only\n");
    }
    printf("\nDecimal equivalent is %d\n", answer);
    return 0;
}