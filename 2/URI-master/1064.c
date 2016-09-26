#include <stdio.h>

int main(void) {
	
	double a, b, c, d, e, f, media;
	int val = 0;
	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

	if (a > 0.0) {
		val++;
		media += a;
	}
	if (b > 0.0) {
		val++;
		media += b;
	}
	if (c > 0.0) {
		val++;
		media += c;
  	}
	if (d > 0.0) {
		val++;
		media += d;
	}
	if (e > 0.0) {
		val++;
		media += e;
	}
	if (f > 0.0) {
		val++;
		media += f;
	}
	media /= val;

	printf("%d valores positivos\n", val);
	printf("%.1f\n", media);
	
	return 0;
	
}
