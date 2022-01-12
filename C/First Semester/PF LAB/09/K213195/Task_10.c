#include <stdio.h>

int main(){
	float land[8][2] = {
		{150.6, 126.9},
		{354.00, 451.51},
		{172.23, 75.65},
		{73.33, 707.17},
		{415.15, 116.17},
		{415.15, 116.17},
		{415.15, 116.17},
		{415.15, 116.17},
	};
	float max;
	float area[8];
	int i, greatestPlotNo;
	max = land[0][0];
	
	printf("%7s  %6s %6s   Area\n\n", "Plot No", "Length", "Width");
	for(i=0;i<8;i++){
			area[i] = land[i][0] * land[i][1];
			printf("%-7d  %-6.2f  %-6.2f  %.2f\n", i+1, land[i][0], land[i][1], area[i]);	
	}
	
	for(i=0;i<8;i++){
		if(area[i] > max){
			max = area[i];
			greatestPlotNo = i + 1;
		}
	}
	
	printf("\n\nPlot No. %d is the greatest with the area of %.2f\n", greatestPlotNo, max);
	return 0;
}
