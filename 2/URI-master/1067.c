#include <stdio.h>

int main(void) {
	
	int a, i = 1;
	scanf("%d", &a);
	
	while (i <= a) {
		printf("%d\n", i);
		i += 2;
	}

	return 0;
	
}
