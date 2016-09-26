#include <stdio.h>

int main(void) {

	char A[50];
	double B, C, TOTAL;
	scanf("%s", A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	TOTAL = (C * 0.15) + B;
	printf("TOTAL = R$ %.2f\n", TOTAL);
	return 0;
}
