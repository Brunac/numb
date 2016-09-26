#include <stdio.h>

int main(void) {

	int i, t, d;
	scanf("%d %d", &i, &t);
	d = 24 - i + t;
	if (d > 24) {
		d-= 24;
	}
	printf("O JOGO DUROU %d HORA(S)\n", d);

	return 0;

}