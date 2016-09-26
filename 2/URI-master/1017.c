#include <stdio.h>

int main(void) {

	int t, vm;
	double s, l;
	scanf("%d", &t);
	scanf("%d", &vm);
	s = vm * t;
	l = s / 12;
	printf("%.3f\n", l);

	return 0;
}