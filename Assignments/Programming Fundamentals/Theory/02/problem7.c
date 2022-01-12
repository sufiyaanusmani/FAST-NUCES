#include <stdio.h>

int main(){
    float x1, y1, x2, y2, x3, y3, x4, y4, slope1, slope2, slope3;

    printf("Enter the coordinates of the first point (x1,y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of the second point (x2,y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the coordinates of the third point (x3,y4): ");
    scanf("%f %f", &x3, &y3);
    printf("Enter the coordinates of the fourth point (x4,y4): ");
    scanf("%f %f", &x4, &y4);

    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y3 - y2) / (x3 - x2);
    slope3 = (y4 - y1) / (x4 - x1);

    if(slope1 == slope2 && slope1 ==  slope3 && slope2 == slope3){
        printf("\nThe given fall on a straight line\n");
    }else{
        printf("\nThe given points do not fall on a straight line\n");
    }
    return 0;
}