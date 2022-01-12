#include <stdio.h>
#include <math.h>

int main(){
	float triangle[6][3] = {	// angles are in radians
								{137.4, 80.9, 0.78},
								{155.2, 92.62, 0.89},
								{149.3, 97.93, 1.3},
								{160.0, 100.25, 9.00},
								{155.6, 68.95, 1.25},
								{149.7, 120.0, 1.75}
	};
	float area[6], maxArea;
	int plotNo, i;
	
	// calculating area of each triangle
	for(i=0;i<6;i++){
		area[i] = 0.5 * triangle[i][0] * triangle[i][1] * sin(triangle[i][2]);
	}
	
	// finding greatest area
	maxArea = area[0];   // used as a reference to compare
	for(i=0;i<6;i++){
		if(area[i] > maxArea){
			maxArea = area[i];
			plotNo = i+1;
		}
	}
	
	printf("Plot No. %d has the largest area with area of %.2f\n", plotNo, maxArea);
	return 0;
}
