#include <stdio.h>
#include <stdlib.h>

int print(int);

int main(){
    int n, i;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("%d  ", print(i));
    }
    return 0;
}

int print(int n){
    return n;
}