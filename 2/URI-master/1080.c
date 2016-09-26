#include <stdio.h>

int main(void) {

	int maior = 0, a, pos = 0, aux = 1, posf;
	while (aux <= 100) {
		scanf("%d", &a);
		pos++;
		if (a > maior) {
			maior = a;
			posf = pos;
		}
		aux++;
	}
	printf("%d\n", maior);
	printf("%d\n", posf);

	return 0;

}
