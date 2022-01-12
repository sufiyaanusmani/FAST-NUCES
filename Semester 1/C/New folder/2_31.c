#include <stdio.h>

int main(){

    printf("number\t\tsquare\t\tcube");
    for(int i=0;i<=10;i++){
        printf("\n%6d\t\t%6d\t\t%4d", i, i*i, i*i*i);
    }
    return 0;
}