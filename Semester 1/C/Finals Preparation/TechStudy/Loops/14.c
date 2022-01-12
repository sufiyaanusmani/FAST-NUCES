#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i, factorial;
    factorial = 1;
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        factorial *= i;
    }

    printf("%d", factorial);
    return 0;
}