#include <stdio.h>

void generate(int n);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    generate(num);
    return 0;
}

void generate(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}