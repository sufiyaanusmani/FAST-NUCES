// power of a number

#include <stdio.h>
#include <stdlib.h>

int cal(int, int);

int main(){
    int num, power, ans;
    scanf("%d %d", &num, &power);
    ans = cal(num, power);
    printf("%d", ans);
    return 0;
}

int cal(int num, int power){
    if(power == 1){
        return num;
    }else{
        return(num * cal(num, power-1));
    }
}