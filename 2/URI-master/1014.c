#include <stdio.h>

int main(void) {

	int X;
	double Y, Z;
	scanf("%d", &X);
	scanf("%lf", &Y);
	Z = X / Y;
	printf("%.3f km/l\n", Z);

	return 0;
}