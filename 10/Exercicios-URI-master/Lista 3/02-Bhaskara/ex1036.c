#include <stdio.h>
#include <math.h>
#include <iostream>

int main(void) {
double A, B, C;
double DELTA, TOTAL1, TOTAL2;
scanf("%lf %lf %lf", &A, &B, &C);

DELTA = pow(B ,2) - 4*A*C;
TOTAL1 = (-B + sqrt(DELTA)) / (2*A);
TOTAL2 = (-B - sqrt(DELTA)) / (2*A);

if(A != 0 && DELTA > 0) {

	printf("R1 = %.5f\nR2 = %.5f\n", TOTAL1, TOTAL2);


	} else {

	printf("Impossivel calcular\n");

	}
return 0;

}
