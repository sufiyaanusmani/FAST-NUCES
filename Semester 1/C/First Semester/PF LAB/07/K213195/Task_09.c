#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int prize, i, ans;
    prize = 0;
    system("cls");
    printf("Quiz\nPress any key to begin");
    getch();

    // Question 1
    system("cls");
    printf("Who is called as father of C Programming?\n");
    printf("\n1. Ken Thompson\n2. Bill Gates\n3. Steve Jobs\n4. Dennis Ritchie\n");
    printf("\nYour choice: ");
    ans = getche();
    switch (ans)
    {
    case '4':
        prize += 10000;
        break;
    case '1':
    case '2':
    case '3':
        system("cls");
        printf("You are out of game");
        Sleep(1500);
        exit(1);
        break;
    }

    // Question 2
    system("cls");
    printf("C Programming was created at ______ by Dennis Ritchie.\n");
    printf("\n1. L&T Laboratory\n2. MIT University\n3. AT&T Bell Laboratory\n4. Stanford Lab\n");
    printf("\nYour choice: ");
    ans = getche();
    switch (ans)
    {
    case '3':
        prize += 10000;
        break;
    case '1':
    case '2':
    case '4':
        prize -= 5000;
        break;
    }
    if(prize<=0){
        system("cls");
        printf("You are out of game");
        Sleep(1500);
        exit(1);
    }

    // Question 3
    system("cls");
    printf("Many features of C were derived from an earlier language called _____.\n");
    printf("\n1. FORTRAN\n2. B\n3. BASIC\n4. PASCAL\n");
    printf("\nYour choice: ");
    ans = getche();
    switch (ans)
    {
    case '2':
        prize += 10000;
        break;
    case '1':
    case '3':
    case '4':
        prize -= 5000;
        break;
    }
    if(prize<=0){
        system("cls");
        printf("You are out of game");
        Sleep(1500);
        exit(1);
    }

    // Question 4
    system("cls");
    printf("C Programming was created in Year _______ .\n");
    printf("\n1. 1972\n2. 1967\n3. 1976\n4. 1980\n");
    printf("\nYour choice: ");
    ans = getche();
    switch (ans)
    {
    case '1':
        prize += 10000;
        break;
    case '2':
    case '3':
    case '4':
        prize -= 5000;
        break;
    }
    if(prize<=0){
        system("cls");
        printf("You are out of game");
        Sleep(1500);
        exit(1);
    }

    // Question 5
    system("cls");
    printf("Dennis Was Author of Famous Programming Book _________ .\n");
    printf("\n1. The C Programming Language\n2. C Programming and Techniques\n3. Thinking in C\n4. C Programming for Scientists\n");
    printf("\nYour choice: ");
    ans = getche();
    switch (ans)
    {
    case '1':
        prize += 10000;
        break;
    case '2':
    case '3':
    case '4':
        prize -= 5000;
        break;
    }
    if(prize<=0){
        system("cls");
        printf("You are out of game");
        Sleep(1500);
        exit(1);
    }
    system("cls");
    printf("Your prize: Rs. %d", prize);

    return 0;
}