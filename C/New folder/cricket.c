#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int toss_user, toss_computer;

    srand(time(0));
    pritnf("TOSS\n1. Head\n2. Tail\nEnter your choice (1/0): ");
    scanf("%d", &toss_user);

    return 0;
}