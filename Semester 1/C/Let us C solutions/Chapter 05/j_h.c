#include <stdio.h>

int binary(int x);

int main(){
    int denary;
    printf("Enter a number in range 0-255: ");
    scanf(" %d", &denary);
    if(denary >= 0 && denary <=255){
        printf("Binary equivalent of %d is %d", denary, binary(denary));
    }else{
        printf("ERROR!");
    }
    return 0;
}

int binary(int x){
    int total = 0;
    if(x >= 128){
        total += 10000000;
        x -= 128;
    }
    if(x >= 64){
        total += 1000000;
        x -= 64;
    }
    if(x >= 32){
        total += 100000;
        x -= 32;
    }
    if(x >= 16){
        total += 10000;
        x -= 16;
    }
    if(x >= 8){
        total += 1000;
        x -= 8;
    }
    if(x >= 4){
        total += 100;
        x -= 4;
    }
    if(x >= 2){
        total += 10;
        x -= 2;
    }
    if(x >= 1){
        total += 1;
    }

    return total;
}