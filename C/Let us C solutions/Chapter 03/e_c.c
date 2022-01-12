#include <stdio.h>

int factorial(int x);

int main(){
    float total = 0;
    for(int i=1;i<=7;i++){
        total = total + (float)i/factorial(i);
    }
    printf("%f", total);
    return 0;
}

int factorial(int x){
    if(x == 1 || x == 0){
        return 1;
    }else{
        return (x * factorial(x-1));
    }
}