#include <stdio.h>

int main(void) {

	double A, B, C, NUMBER ,SALARY;
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	NUMBER = A;
	SALARY = B * C;
	printf("NUMBER = %.0f\n", NUMBER);
	printf("SALARY = U$ %.2f\n", SALARY);
	return 0;
}
