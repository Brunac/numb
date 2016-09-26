#include <stdio.h>

#define pi 3.14159

int main(void) {

	double A, r;
	scanf("%lf", &r);
	A = pi*r*r;
	printf("A=%.4f\n", A);
	return 0;
}
