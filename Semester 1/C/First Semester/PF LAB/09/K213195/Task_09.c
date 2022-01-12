#include <stdio.h>

int main(){
	int i, j, k, l;
	float iqScore[112][2];
	float p, iq;
	k = 0;
	l = 1;
	
	for(i=1;i<=7;i++){
		p = 4.5;
		for(j=1;j<=16;j++){
			iqScore[k][0] = l;
			iqScore[k][1] = 2 + (i + 0.5*p);
			k++;
			p += 0.6;
		}
		l++;
	}
	printf("A   p      IQ\n---------------\n");
	
	p = 3.9;
	
	for(i=0;i<112;i++){
		p += 0.6;
		printf("%.0f   %-4.1f   %-5.2f\n", iqScore[i][0], p, iqScore[i][1]);
		if((i+1) % 16 == 0){
			p = 3.9;
			printf("\n");
		}
	}
	
	return 0;
}

