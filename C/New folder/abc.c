#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int main()
{
    printf("***** Program by SUFIYAAN USMANI *****\n");
    int num, user, count;
    count = 0;

    srand(time(0));
    num = (rand() % 100) + 1;

    do{
        printf("\nEnter your guess between 0 to 100: ");
        scanf(" %d", &user);

        if(user < num){
            printf("\nYou guessed a lower number\n");
        }
        if(user > num){
            printf("\nYou guessed a higher number\n");
        }
        count += 1;
    }while(user != num);

    printf("\nYou guessed %d right after %d turns", num, count);
    return 0;
}
