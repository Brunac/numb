#include <stdio.h>

int main(void) {

	double a, b, c, d, e, f;
	int val = 0;
	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

	if (a > 0.0) {
		val++;
	}
	if (b > 0.0) {
		val++;
	}
	if (c > 0.0) {
		val++;
	}
	if (d > 0.0) {
		val++;
	}
	if (e > 0.0) {
		val++;
	}
	if (f > 0.0) {
		val++;
	}

	printf("%d valores positivos\n", val);

	return 0;

}