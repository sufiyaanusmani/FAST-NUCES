#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, k=0, l;
    system("cls");

    for(i=1;i<=9;i++){
        if(i<=5){
            k++;
        }else{
            k--;
        }
        l = 1;
        for(j=1;j<=5;j++){
            if(j>=6-k){
                printf("%d", l);
                l++;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}