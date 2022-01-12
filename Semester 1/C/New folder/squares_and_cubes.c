#include <stdio.h>

int main(){
    printf("%s\t%s\t%s\n", "number", "square", "cube");

    for(int i=0;i<=10;i++){
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }
    return 0;
}