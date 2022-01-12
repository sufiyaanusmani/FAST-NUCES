#include <stdio.h>

int main(){
	float const PI = 3.14159;
	int length, breadth, radius, areaRectangle, perimeter;
	float circumference, areaCircle;
	
	printf("Enter length of rectangle: ");
	scanf("%d", &length);
	printf("Enter breadth of rectangle: ");
	scanf("%d", &breadth);
	printf("\nEnter radius of circle: ");
	scanf("%d", &radius);
	
	areaRectangle = length * breadth;
	perimeter = (2*length) + (2*breadth);
	areaCircle = PI * radius * radius;
	circumference = 2 * PI * radius;
	
	printf("\n\n---------------------------");
	printf("\nArea of rectangle       : %d", areaRectangle);
	printf("\nPerimeter of rectangle  : %d", perimeter);
	printf("\n\nArea of circle          : %.2f", areaCircle);
	printf("\nCircumference of circle : %.2f\n", circumference);
	getch();
	
	return 0;
}
