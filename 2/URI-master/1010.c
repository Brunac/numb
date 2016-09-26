#include <stdio.h>


int main(void) {

	int C1, C2, Q1, Q2;
	double V1, V2, TOTAL;
	scanf("%d %d %lf", &C1, &Q1, &V1);
	scanf("%d %d %lf", &C2, &Q2, &V2);
	TOTAL = (Q1 * V1) + (Q2 * V2);
	printf("VALOR A PAGAR: R$ %.2f\n", TOTAL);
	
	return 0;

}