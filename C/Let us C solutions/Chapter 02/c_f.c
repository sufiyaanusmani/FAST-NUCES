#include <stdio.h>
#include <stdlib.h>

int main(){
    int age1, age2, age3;

    printf("Enter Ram's age: ");
    scanf("%d", &age1);
    printf("Enter Shyam's age: ");
    scanf("%d", &age2);
    printf("Enter Ajay's age: ");
    scanf("%d", &age3);
    printf("\n\n");

    if(age1 < age2 && age1 < age3){
        printf("Ram is youngest");
    }else if(age2 < age1 && age2 < age3){
        printf("Shyam is youngest");
    }else if(age3 < age1 && age3 < age2){
        printf("Ajay is youngest");
    }else{
        printf("ERROR");
    }
    return 0;
}