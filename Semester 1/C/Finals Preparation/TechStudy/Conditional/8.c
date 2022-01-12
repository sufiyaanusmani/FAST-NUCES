#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Uppercase");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("Lowercase");
    }else{
        printf("None");
    }
    return 0;
}