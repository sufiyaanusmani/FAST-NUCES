#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char code[5], store;

    srand(time(0));

    for(int i=0;i<=4;i++){
        do{
            store = (rand() % 122) + 1;
            if(store>=48 && store<=57){
                break;
            }
        }while(store<97 || store>122);
        code[i] = store;
    }
    system("cls");
    printf("Code: ");

    for(int i=0;i<=4;i++){
        printf("%c", code[i]);
    }
    return 0;
}