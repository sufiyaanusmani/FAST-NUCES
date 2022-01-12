#include <stdio.h>
#define PI 3.14159

int main(){
    int radius;
    float area;

    printf("Enter radius of circle: ");
    scanf("%d", &radius);

    area = PI * (float)radius * (float)radius;

    printf("\nArea of circle: %.2f", area);

    return 0;
}