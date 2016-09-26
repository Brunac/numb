#include <stdio.h>

int main(void) {
	double A1, B1, C1, A2, B2, C2, TOTAL;
	scanf("%lf%lf%lf", &A1, &B1, &C1);
	scanf("%lf%lf%lf", &A2, &B2, &C2);
	TOTAL = (B1*C1) + (B2*C2);
	printf("VALOR A PAGAR: R$ %.2f\n", TOTAL);
	return 0;
}
