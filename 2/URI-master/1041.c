#include <stdio.h>

int main(void) {

	double x, y;
	scanf("%lf %lf", &x, &y);
	if (x == 0.0 && y == 0.0) {
		printf("Origem\n");
	}
	if (y == 0.0 && x != 0.0) {
		printf("Eixo X\n");
	}
	if (x == 0.0 && y != 0.0) {
		printf("Eixo Y\n");
	}
	if (x > 0.0 && y > 0.0) {
		printf("Q1\n");
	} else if (x < 0.0 && y > 0.0) {
		printf("Q2\n");
	} else if (x < 0.0 && y < 0.0) {
		printf("Q3\n");
	} else if (x > 0.0 && y < 0.0) {
		printf("Q4\n");
	}

	return 0;

}