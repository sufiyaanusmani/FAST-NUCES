#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rollNo, binary, b1, b2, b3, b4, b5, b6, temp, total;
    b1 = b2 = b3 = b4 = b5 = b6 = 0;
    total = 0;

    printf("Enter the last 2 digits of your roll number: ");
    scanf("%d", &rollNo);

    temp = rollNo;

    if (rollNo >= 10 && rollNo <= 99)
    {
        if (temp >= 32)
        {
            b1 = 1;
            temp -= 32;
        }
        if (temp >= 16)
        {
            b2 = 1;
            temp -= 16;
        }
        if (temp >= 8)
        {
            b3 = 1;
            temp -= 8;
        }
        if (temp >= 4)
        {
            b4 = 1;
            temp -= 4;
        }
        if (temp >= 2)
        {
            b5 = 1;
            temp -= 2;
        }
        if (temp >= 1)
        {
            b6 = 1;
            temp -= 1;
        }

        binary = (b1 * 100000) + (b2 * 10000) + (b3 * 1000) + (b4 * 100) + (b5 * 10) + (b6);
        printf("Binary equivalent of %d is %d", rollNo, binary);

        // program to convert binary to decimal equivalent
        // reusing b1, b2, b3, b4, b5, b6, and temp
        temp = binary;

        b6 = temp % 10;
        temp /= 10;
        b5 = temp % 10;
        temp /= 10;
        b4 = temp % 10;
        temp /= 10;
        b3 = temp % 10;
        temp /= 10;
        b2 = temp % 10;
        b1 = temp / 10;

        if (b1 == 1)
        {
            total += 32;
        }
        if (b2 == 1)
        {
            total += 16;
        }
        if (b3 == 1)
        {
            total += 8;
        }
        if (b4 == 1)
        {
            total += 4;
        }
        if (b5 == 1)
        {
            total += 2;
        }
        if (b6 == 1)
        {
            total += 1;
        }

        printf("\nThe decimal equivalent of %d is %d", binary, total);
    
        printf("\nHurrah!! your program is correct\n");
    }
    else
    {
        printf("Invalid input. Please try again.");
    }
    return 0;
}