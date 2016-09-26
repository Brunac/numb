#include <stdio.h>
#include <math.h>

int main(void) {

	double A, B, C, delta, R1, R2;
	scanf("%lf %lf %lf", &A, &B, &C);
	delta = pow(B, 2.0) - 4.0 * A * C;
	if (A != 0.0 && delta >= 0.0) {
		R1 = (-B + sqrt(delta)) / (2.0 * A);
		R2 = (-B - sqrt(delta)) / (2.0 * A);
		printf("R1 = %.5f\n", R1);
		printf("R2 = %.5f\n", R2);
	} else {
		printf("Impossivel calcular\n");
	}

	return 0;

}