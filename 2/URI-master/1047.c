#include <stdio.h>

int main(void) {

	int hi, mi, hf, mf, dh = 0, dm;
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	if (hi >= hf) {
		dh = 24 - hi + hf;
	} else {
		dh = hf - hi;
	}
	if (mi <= mf) {
		dm = mf - mi;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
	} else {
		dm = 60 - mi + mf;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (dh - 1), dm);
	}

	return 0;

}