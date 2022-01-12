#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;

    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
            if(j<=8-i){
                printf("%d", (8-i)-j);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}