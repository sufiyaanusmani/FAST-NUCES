#include <stdio.h>
#define PI 3.14159

int main(){
    int radius, height;
    float volume;

    printf("Enter radius of cylinder: ");
    scanf("%d", &radius);
    printf("\nEnter height of cylinder: ");
    scanf("%d", &height);

    volume = PI * (float)radius * (float)radius * (float)height;

    printf("\nVolume of cylinder: %.2f", volume);
    return 0;

}