#include <stdio.h>

int main(void) {
	
	int a, aux = 0;
	scanf("%d", &a);
	
	if (a % 2 == 0) {
		a++;
	}
	while (aux < 6) {
		printf("%d\n", a);
		aux++;
		a += 2;
	}
	
	return 0;
	
}
