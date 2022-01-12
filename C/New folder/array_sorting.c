#include <stdio.h>

int main(){
    int num[11];
    int i, temp;

    for(i=1;i<=10;i++){
        printf("Enter number: ");
        scanf("%d", &num[i]);
    }

    for(i=1;i<=10;i++){
        for(int j=i+1;j<=10;j++){
            if(num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for(i=1;i<=10;i++){
        printf("\n%d ", num[i]);
        
    }
    return 0;
}