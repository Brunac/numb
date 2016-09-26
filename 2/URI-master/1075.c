#include <stdio.h>

int main(void) {
	
	int N, i = 1;
	scanf("%d", &N);
	
	while (i <= 10000) {
		i++;
		if (i % N == 2) {
			printf("%d\n", i);
		}
	}
	
	return 0;
	
}
