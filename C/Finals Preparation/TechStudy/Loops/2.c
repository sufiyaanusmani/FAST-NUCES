#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    for(i=0;i<=127;i++){
        printf("%3d = %c\n", i, i);
    }
    return 0;
}