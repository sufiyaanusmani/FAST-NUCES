#include <stdio.h>

int main(){
    int length, breadth, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2*length + 2*breadth;

    if(area > perimeter){
        printf("\nArea is greater than perimeter\n");
    }else{
        printf("\nPerimeter is greater than area\n");
    }
    return 0;
}