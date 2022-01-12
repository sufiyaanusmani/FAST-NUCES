#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int binaryNumber, digit, denaryNumber, i, digitCount;
    binaryNumber = denaryNumber = 0;
    char ch;
    system("cls");
    printf("Enter 8 digit binary number: ");

    // the following loop will only input either 1 or 0 and will keep on taking input until 8 digits are entered
    // after 8 digits are entered, loop will terminate automatically and will automatically stop taking further inputs
    for (digitCount = 1; digitCount <= 8;)
    {
        ch = getch();
        if (ch == '0' || ch == '1')
        {
            printf("%c", ch);
            binaryNumber = (binaryNumber * 10) + (ch - 48); // 48 is used because ASCII value of 0 is 48 so 48 - 48 = 0, ASCII value of 1 is 49 so 49 - 48 = 1
            digitCount++;                                   // this will only increment if either 0 or 1 is entered
        }
    }

    for (i = 0; i <= 7; i++)
    {
        digit = binaryNumber % 10;
        binaryNumber = binaryNumber / 10;
        denaryNumber = denaryNumber + (digit * pow(2, i));
    }

    system("cls");
    printf("Denary Number: %d", denaryNumber);

    return 0;
}
