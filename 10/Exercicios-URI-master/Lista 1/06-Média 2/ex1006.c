#include <stdio.h>

int main(void) {

	double A, B, C, MEDIA;
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	MEDIA = ((A * 2)/10 + (B * 3)/10 + (C * 5)/10);
	printf("MEDIA = %.1f\n", MEDIA);
	return 0;
}
