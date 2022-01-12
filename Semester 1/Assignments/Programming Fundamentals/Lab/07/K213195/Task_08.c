#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x, y, answer, userInput, a, b, temp, correctCount, wrongCount;
    correctCount = wrongCount = 0;
    srand(time(0));
    system("cls");

    do
    {
        //generating random numbers
        x = (rand() % 10) + 1;
        y = (rand() % 10) + 1;
        answer = x * y;
        a = x;
        b = y;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        printf("%d * %d = ", a, b);
        scanf(" %d", &userInput);
        printf("\n");
        if (userInput != -1)
        {
            if (userInput == answer)
            {
                correctCount++;
            }
            else
            {
                wrongCount++;
            }
        }
    } while (userInput != -1);

    system("cls");
    printf("Total number of correct answers: %d", correctCount);
    printf("\nTotal number of wrong answers: %d", wrongCount);
    return 0;
}