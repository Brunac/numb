#include <stdio.h>

int main(void) {

	int x, a, m, d;
	scanf("%d", &x);
	a = x / 365;
	x -= a * 365;
	m = x / 30;
	x -= m * 30;
	d = x;
	printf("%d ano(s)\n", a);
	printf("%d mes(es)\n", m);
	printf("%d dia(s)\n", d);

	return 0;

}