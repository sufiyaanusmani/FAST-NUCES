#include <stdio.h>
#include <stdlib.h>

int main(){
    int dayInput, day, week, year;
    scanf("%d", &dayInput);
    year = dayInput / 365;
    dayInput = dayInput % 365;
    week = dayInput / 7;
    day = dayInput % 7;

    printf("%d years, %d weeks, and %d days\n", year, week, day);
    return 0;
}