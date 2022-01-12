#include <stdio.h>

int sum(int n);

int main(){
    int m;
    printf("Enter number of number: ");
    scanf("%d", &m);

    printf("\nSum: %d", sum(m));
    return 0;
}

int sum(int n){
    int total = 0;
    int num;
    for(int i=1;i<=n;i++){
        printf("Enter a number: ");
        scanf("%d", &num);
        total += num;
        printf("\n");
    }
    return total;
}