#include <stdio.h>
#include <stdlib.h>

int main(){
    float const PI = 3.14159;
    float r;
    scanf("%f", &r);
    printf("%.2f", PI * r * r);
    return 0;
}