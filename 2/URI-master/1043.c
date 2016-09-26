#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

	double A, B, C, p, area;
	scanf("%lf %lf %lf", &A, &B, &C);
	if ((abs(B - C) < A && A < (B + C)) && (abs(A - C) < B && B < (A + C)) && (abs(A - B) < C && C < (A + B))) {
		p = A + B + C;
		printf("Perimetro = %.1f\n", p);
	} else {
		area = ((A + B) * C) / 2;
		printf("Area = %.1f\n", area);
	}

	return 0;

}