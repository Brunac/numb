#include <stdio.h>

int main(void) {

	int i = 1, j = 7, count = 5;
	while (i <= 9) {
		while (j >= count) {
			printf("I=%d J=%d\n", i, j);
			j--;
		}
		i += 2;
		j += 5;
		count += 2;
	}
	
	return 0;

}
