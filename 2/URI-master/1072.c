#include <stdio.h>

int main(void) {
	
	int N, a, in = 0, out = 0;
	scanf("%d", &N);
	
	while (N > 0) {
		N--;
		scanf("%d", &a);
		if (a >= 10 && a <= 20) {
			in++;
		} else {
			out++;
		}
	}
	
	printf("%d in\n", in);
	printf("%d out\n", out);
	
	return 0;
	
}
