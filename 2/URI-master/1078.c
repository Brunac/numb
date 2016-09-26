#include <stdio.h>

int main(void) {
	
	int N, aux = 1;
	scanf("%d", &N);
	
	while (aux <= 10) {
		printf("%d x %d = %d\n", aux, N, aux * N);
		aux++;
	}
	
	return 0;
	
}
