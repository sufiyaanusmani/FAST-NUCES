#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("Alphabet");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}