#include <stdio.h>

int main(){
    float u, v, a, t, s;

    printf("Enter initial velocity: ");
    scanf("%f", &u);
    printf("\nEnter acceleration: ");
    scanf("%f", &a);
    printf("\nEnter time: ");
    scanf("%f", &t);

    v = u + (a*t);
    s = (u*t) + (0.5*a*t*t);

    printf("\nFinal Velocity: %.2f", v);
    printf("\nDistance Travelled: %.2f\n", s);
    return 0;
}