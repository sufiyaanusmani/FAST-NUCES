#include <stdio.h>

int main(){
    int n, ans;
    ans = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        ans *= i;
    }

    printf("\nFactorial of %d: %d", n, ans);

    return 0;
}