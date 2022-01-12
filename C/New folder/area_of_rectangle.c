#include <stdio.h>

int main(){
    int length, width, area;
    
    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("\nEnter width of the rectangle: ");
    scanf("%d", &width);

    area = length * width;

    printf("\nArea of rectangle: %d", area);

    return 0;
}