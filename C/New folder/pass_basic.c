#include <stdio.h>
#include <stdlib.h>

int main(){
    int pass = 1234;
    int user;
    do{
        system("cls");
        printf("Enter password: ");
        scanf("%d", &user);
    }while(user != pass);
    printf("Access Granted\n");
    return 0;
}