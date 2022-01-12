// lcm
#include <stdio.h>
#include <stdlib.h>

int lcm(int, int, int);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", lcm(a, b, a>b?a:b));
    return 0;
}

int lcm(int a, int b, int l){
    if(l%a==0 && l%b==0){
        return l;
    }else{
        lcm(a, b, l+1);
    }
}
/*
    l = num1>num2?num1:num2;
    while(1){
        if(l%num1 == 0 && l%num2 == 0){
            break;
        }
        l++;
    }
*/