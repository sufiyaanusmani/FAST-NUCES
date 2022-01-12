#include <stdio.h>

int main(){
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    if(letter>=97 && letter<=122){
        printf("\n%c is a lowercase\n", letter);
    }else{
        printf("\n%c is not a lowercase\n", letter);
    }
    return 0;
}