#include <stdio.h>
#include <math.h>

int main(void) {

	double A, B, C, pi = 3.14159, AREA1, AREA2, AREA3, AREA4, AREA5;
	scanf("%lf %lf %lf", &A, &B, &C);
	AREA1 = (A * C) / 2;
	AREA2 = pi * pow(C, 2);
	AREA3 = ((A + B) * C) / 2;
	AREA4 = B * B;
	AREA5 = A * B;
	printf("TRIANGULO: %.3f\n", AREA1);
	printf("CIRCULO: %.3f\n", AREA2);
	printf("TRAPEZIO: %.3f\n", AREA3);
	printf("QUADRADO: %.3f\n", AREA4);
	printf("RETANGULO: %.3f\n", AREA5);

	return 0;
}