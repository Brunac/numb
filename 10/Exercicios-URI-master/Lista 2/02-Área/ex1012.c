#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main(void) {
	double A, B, C, TRI, CIR, TRA, QUA, RET;
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	TRI = (A * C) / 2;
	CIR = pi * pow(C, 2);
	TRA = ((A + B)*C)/2;
	QUA = pow(B, 2);
	RET = A*B;
	printf("TRIANGULO: %.3f\n", TRI);
	printf("CIRCULO: %.3f\n", CIR);
	printf("TRAPEZIO: %.3f\n", TRA);
	printf("QUADRADO: %.3f\n", QUA);
	printf("RETANGULO: %.3f\n", RET);
	return 0;
}
