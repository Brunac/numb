#include <stdio.h>

int main(void) {
	
	int X, Y, swap, count, soma = 0;
	scanf("%d %d", &X, &Y);
	
	if (X > Y) {
		swap = X;
		X = Y;
		Y = swap;
	}
	count = X;
	while (count <= Y) {
		if (count % 13 != 0) {
			soma += count;
		}
		count++;
	}
	printf("%d\n", soma);
	
	return 0;
	
}
