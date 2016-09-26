#include <stdio.h>

int main(void) {
	
	int a, b, c, d, e, aux = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	if (a % 2 == 0) {
		aux++;
	}
	if (b % 2 == 0) {
		aux++;
	}
	if (c % 2 == 0) {
		aux++;
	}
	if (d % 2 == 0) {
		aux++;
	}
	if (e % 2 == 0) {
		aux++;
	}
	
	printf("%d valores pares\n", aux);
	
	return 0;
	
}
