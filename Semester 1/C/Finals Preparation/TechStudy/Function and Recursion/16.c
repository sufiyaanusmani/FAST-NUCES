// hcf
#include <stdio.h>
#include <stdlib.h>

int hcf(int, int, int);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", hcf(a, b, a<b?a:b));
    return 0;
}

int hcf(int a, int b, int s){
    if((a%s==0 && b%s==0) || (s == 1)){
        return s;
    }else{
        hcf(a, b, s-1);
    }
}
/*
    s=a<b?a:b;
    for(i=s;i>=1;i++){
        if(a%s==0 && b%s== 0){
            break;
        }
    }
*/