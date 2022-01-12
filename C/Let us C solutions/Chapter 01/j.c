#include <stdio.h>

int main(){
	int totalPopulation, men, women, lmen, lwomen, l, imen, iwomen, i;
	
	totalPopulation = 80000;
	men = 0.52 * totalPopulation;
	women = totalPopulation - men;
	l = 0.48 * totalPopulation;
	i = totalPopulation - l;
	lmen = totalPopulation * 0.35;
	imen = men - lmen;
	lwomen = l - lmen;
	iwomen = women - lwomen;
	
	printf("Illiterate men: %d", imen);
	printf("\nIlleterate women: %d", iwomen); 
}
