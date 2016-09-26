#include <stdio.h>
#include <string.h>

int main(void) {
	
	int N, i, j, metade, aux = 0, k = 0;
	char str[105], trs[105];
	scanf("%d", &N);
	getchar();
	
	for(i = 1; i <= N; i++) {
		gets(str);
		metade = strlen(str) / 2;
		for(j = metade - 1; j >= 0; j--) {
			trs[aux] = str[j];
			aux++;
		}
		for(j = strlen(str) - 1; j >= metade; j--) {
			trs[aux] = str[j];
			aux++;
		}
		trs[aux] = '\0';
		printf("%s\n", trs);
		while(trs[k] != '\0') {
			trs[k] = '\0';
			k++;
		}
		aux = 0;
	}
	
	return 0;
	
}
