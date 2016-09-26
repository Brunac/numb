#include <stdio.h>
#include <string.h>

int main(void) {
	
	int N, aux, i;
	char str[60];
	scanf("%d", &N);
	getchar();
	
	while(N--) {
		gets(str);
		scanf("%d", &aux);
		getchar();
		for(i = 0; i < strlen(str); i++) {
			if(str[i] < aux + 65) {
				str[i] += 26 - aux;
			} else {
				str[i] -= aux;
			}
		}
		printf("%s\n", str);
	}
	
	return 0;
	
}
