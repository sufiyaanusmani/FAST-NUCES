#include <stdio.h>

int main(){
    int hardness, strength, grade;
    float carbon;

    printf("Enter hardness: ");
    scanf("%d", &hardness);
    printf("\nEnter tensile strength: ");
    scanf("%d", &strength);
    printf("\nEnter carbon content: ");
    scanf("%f", &carbon);

    if(hardness > 50 && strength > 5600 && carbon < 0.7){
        grade = 10;
    }else if(hardness > 50 && carbon < 0.7 && strength <= 5600 ){
        grade = 9;
    }else if(carbon < 0.7 && strength > 5600 && hardness <= 50){
        grade = 8;
    }else if(hardness > 50 && strength > 5600 && carbon >= 0.7){
        grade = 7;
    }else if(hardness > 50 || strength > 5600 && carbon < 0.7){
        grade = 6;
    }else{
        grade = 5;
    }

    printf("\n\nGrade: %d", grade);

    return 0;
}