#include <stdio.h>
#include <stdlib.h>

int main(){
    int marks, total;
    total = 0;
    float percentage;

    for(int i=1;i<=5;i++){
        printf("Enter marks for subject %d: ", i);
        scanf("%d", &marks);
        total += marks;
    }

    percentage = (float)total / 5;
    system("cls");
    printf("Marks: %d/500", total);
    printf("\nPercentage: %.1f\n", percentage);
    return 0;
}