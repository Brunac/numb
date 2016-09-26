#include <stdio.h>

int main(void) {
	
	int N;
	double a, b, c, media;
	scanf("%d", &N);
	
	while (N > 0) {
		scanf("%lf %lf %lf", &a, &b, &c);
		media = (2 * a + 3 * b + 5 * c) / 10;
		printf("%.1f\n", media);
		N--;
	}
	
	return 0;
	
}
