#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, sum;
    sum = 0;
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        if(i % 2 == 0){
            sum += i;
        }
    }

    printf("%d", sum);
    return 0;
}