#include <stdio.h>
#include <stdlib.h>

int cal(int);

int main(){
    int num;
    scanf("%d", &num);
    printf("%d", cal(num));
    return 0;
}

int cal(int num){
    if(num == 0){
        return 0;
    }else{
        return(num + cal(num-1));
    }
}