#include <stdio.h>

int main(){
    char user_input;

    printf("Enter a letter: ");
    scanf("%c", &user_input);

    if(user_input=='a' || user_input=='e' || user_input=='i' || user_input=='o' || user_input=='u'){
        printf("\n%c is a vowel\n", user_input);
    }else{
        printf("\n%c is a consonant\n", user_input);
    }
    return 0;
}