#include <stdio.h>
#include <stdlib.h>

int main(){
    int length;

    printf("Enter length of side: ");
    scanf("%d", &length);
    system("cls");

    for(int i=1;i<=length;i++){
       for(int j=1;j<=length;j++){
           printf("* ");
        }
        printf("\n");
    }
    return 0;
}