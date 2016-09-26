#include <stdio.h>
#include <math.h>

int main(void) {

	double A, B, C, x, y, m, n;
	scanf("%lf %lf %lf", &A, &B, &C);
	if (A > B && A > C) {
		if (C > B) {
			x = B;
			B = C;
			C = x;
		}
	} else if (B > A && B > C) {
		x = A;
		A = B;
		B = x;
		if (C > B) {
			y = B;
			B = C;
			C = y;
		}
	} else if (C > A && C > B) {
		m = A;
		n = B;
		A = C;
		B = m;
		C = n;
	}
	if (A >= (B + C)) {
		printf("NAO FORMA TRIANGULO\n");
	} else if (pow(A, 2) == (pow(B, 2) + pow (C, 2))) {
		printf("TRIANGULO RETANGULO\n");
	} else if (pow(A, 2) > (pow(B, 2) + pow (C, 2))) {
		printf("TRIANGULO OBTUSANGULO\n");
	} else if (pow(A, 2) < (pow(B, 2) + pow (C, 2))) {
		printf("TRIANGULO ACUTANGULO\n");
	}
	if (A == B && A == C) {
		printf("TRIANGULO EQUILATERO\n");
	} else if ((A == B && A != C) || (B == C && B != A) || (C == A && C != B)) {
		printf("TRIANGULO ISOSCELES\n");
	}
	
	return 0;

}