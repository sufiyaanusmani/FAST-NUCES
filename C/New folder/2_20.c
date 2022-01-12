#include <stdio.h>

int main(){
    int user_input, hour, minute, second, remaining;

    printf("Enter time in seconds: ");
    scanf("%d", &user_input);

    hour = user_input / 3600;
    remaining = user_input % 3600;
    minute = remaining / 60;
    second = remaining % 60;

    printf("\n\n%d:%d:%d\n", hour, minute, second);
    return 0;
}