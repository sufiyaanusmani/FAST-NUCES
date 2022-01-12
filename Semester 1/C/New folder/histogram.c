#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i;

    printf("Enter number of data to be entered: ");
    scanf("%d", &num);
    int data[num];
    system("cls");
    for(i=1;i<=num;i++){
        printf("Enter data: ");
        scanf("%d", &data[i]);
        printf("\n");
    }
    system("cls");
    for(i=1;i<=num;i++){
        for(int j=1;j<=data[i];j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}