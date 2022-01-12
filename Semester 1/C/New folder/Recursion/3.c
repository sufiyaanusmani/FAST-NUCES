// Fibonacci Series (1, 1, 2, 3, 5, 8, 13, ...)
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);

int main(){
    int i, n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("%d  ", fibonacci(i));
    }
    return 0;
}

int fibonacci(int n){
    if(n <= 2){
        return 1;
    }else{
        return(fibonacci(n-1) + fibonacci(n-2));
    }
}