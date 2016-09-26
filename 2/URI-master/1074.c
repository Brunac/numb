#include <stdio.h>

int main(void) {
	
	int N, a;
	scanf("%d", &N);
	
	while (N > 0) {
		N--;
		scanf("%d", &a);
		if (a == 0) {
   				printf("NULL\n");
		} else if (a % 2 != 0) {
			if (a > 0) {
				printf("ODD POSITIVE\n");
			} else {
				printf("ODD NEGATIVE\n");
			}
		} else if (a % 2 == 0) {
			if (a > 0) {
				printf("EVEN POSITIVE\n");
			} else {
				printf("EVEN NEGATIVE\n");
			}
		}
	}

	return 0;
	
}
