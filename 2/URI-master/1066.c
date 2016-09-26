#include <stdio.h>

int main(void) {
	
	int a, b, c, d, e, valp = 0, valn = 0, valpar = 0, valimpar = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	if (a > 0) {
		valp++;
	} else if (a < 0) {
		valn++;
	}
	if (b > 0) {
		valp++;
	} else if (b < 0)  {
		valn++;
	}
	if (c > 0) {
		valp++;
	} else if (c < 0)  {
		valn++;
	}
	if (d > 0) {
		valp++;
	} else if (d < 0) {
		valn++;
	}
	if (e > 0) {
		valp++;
	} else if (e < 0)  {
		valn++;
	}
	if (a % 2 == 0) {
		valpar++;
	} else {
		valimpar++;
	}
	if (b % 2 == 0) {
		valpar++;
	} else {
		valimpar++;
	}
	if (c % 2 == 0) {
		valpar++;
	} else {
		valimpar++;
	}
	if (d % 2 == 0) {
		valpar++;
	} else {
		valimpar++;
	}
	if (e % 2 == 0) {
		valpar++;
	} else {
		valimpar++;
	}
	
	printf("%d valor(es) par(es)\n", valpar);
	printf("%d valor(es) impar(es)\n", valimpar);
	printf("%d valor(es) positivo(s)\n", valp);
	printf("%d valor(es) negativo(s)\n", valn);
	
	return 0;
	
}
