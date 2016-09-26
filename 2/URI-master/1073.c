#include <stdio.h>

int main(void) {
	
	long int i = 0;
	int M = 0, aux, N;
	scanf("%d", &N);
	
	aux = N - 1;
	if (N % 2 != 0 && N > aux) {
		N--;
	} else if (N % 2 != 0 && N < aux) {
		N++;
	}
	while (M < N) {
		N -= 2;
		M += 2;
		i += 2;
		printf("%d^2 = %d\n", i, i*i);
		M -= 2;
	}
	
	return 0;
	
}
