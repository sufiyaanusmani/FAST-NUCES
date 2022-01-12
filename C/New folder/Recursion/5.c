// counting digits of a number
#include <stdio.h>
#include <stdlib.h>

int count(int);

int main(){
    int num;
    scanf("%d", &num);
    printf("Count: %d", count(num));
    return 0;
}

int count(int num){
    static int i = 0;
    if(num == 0){
        return i;
    }else{
        i++;
        count(num / 10);
    }
}