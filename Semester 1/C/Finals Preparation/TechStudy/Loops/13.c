#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, num, power, ans;
    ans = 1;
    scanf("%d %d", &num, &power);
    for(i=1;i<=power;i++){
        ans *= num;
    }
    printf("%d", ans);
    return 0;
}