#include <stdio.h>

int main(){
    int a1, a2, a3;

    printf("Enter angles of triangle: ");
    scanf("%d %d %d", &a1, &a2, &a3);

    if(a1+a2+a3 == 180){
        printf("\nTriangle is valid\n");
    }else{
        printf("\nTriangle is invalid\n");
    }
    return 0;
}