#include <stdio.h>
#include <math.h>

int main(void) {

	int r;
	double pi = 3.14159, v;
	scanf("%d", &r);
	v = (4/3.0) * pi * pow(r, 3);
	printf("VOLUME = %.3f\n", v);

	return 0;

}