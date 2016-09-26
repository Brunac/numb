#include <stdio.h>

int main(void) {
	
	int X, Y, aux = 0, swap;
	scanf("%d %d", &X, &Y);
	
	if (Y < X) {
		swap = X;
		X = Y;
		Y = swap;
	}
	X++;
	if (X % 2 == 0) {
		X++;
	}
	while (X < Y) {
		aux += X;
		X += 2;
	}
	
	printf("%d\n", aux);
	
	return 0;
	
}
