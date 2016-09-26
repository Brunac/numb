#include <stdio.h>

int main(void) {

	double x;
	scanf("%lf", &x);
	if (0.00 <= x && x <= 25.00) {
		printf("Intervalo [0,25]\n");
	} else if (25.00 < x && x <= 50.00) {
		printf("Intervalo (25,50]\n");
	} else if (50.00 < x && x <= 75.00) {
		printf("Intervalo (50,75]\n");
	} else if (75.00 < x && x <= 100.00) {
		printf("Intervalo (75,100]\n");
	} else {
		printf("Fora de intervalo\n");
	}

	return 0;

}