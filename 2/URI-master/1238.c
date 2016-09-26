#include <stdio.h>
#include <string.h>

int main(void) {

	int tam1, tam2, i, j, k, l, N;
	char str[100], str1[100], str2[100];
	scanf("%d", &N);

	for(i = 1; i <= N; i++) {

    	scanf("%s", str);
		scanf("%s", str1);
		tam1 = strlen(str);
		tam2 = strlen(str1);
		if(tam1 >= tam2) {
			for(j = 0, k = 0; j < 2 * tam2; j++, k++) {
				str2[j] = str[k];
				j++;
				str2[j] = str1[k];
			}
			for(j, l = tam2; l < tam1; j++, l++) {
				str2[j] = str[l];
			}
			str2[j] = '\0';
		} else {
			for(j = 0, k = 0; j < 2 * tam1; j++, k++) {
				str2[j] = str[k];
				j++;
				str2[j] = str1[k];
			}
			for(j, l = tam1; l < tam2; j++, l++) {
				str2[j] = str1[l];
			}
			str2[j] = '\0';
		}
		printf("%s\n", str2);
	}

	return 0;

}
