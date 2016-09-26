#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
	
	int N, i;
	bool aux1;
	char str[1100];
	scanf("%d", &N);
	getchar();
	
	while(N--) {
		gets(str);
		i = 0;
		if(strlen(str) > 3) {
			printf("3\n");
		} else {
			if(str[i] == 'o') {
				if(str[i + 1] == 'n' || str[i + 2] == 'e') {
	 				aux1 = true;
				}
			} else if(str[i + 1] == 'n') {
				if(str[i + 2] == 'e') {
	 				aux1 = true;
				}
			} else {
				aux1 = false;
			}
			if(aux1) {
				printf("1\n");
			} else {
				printf("2\n");
			}
		}
		
	}
	
	return 0;
	
}
