#include <stdio.h>
#include <string.h>

int main(void) {
	
	int N, i, j, tam;
	char str[60], str2[60];
	scanf("%d", &N);
	getchar();
	
	while(N--) {
		gets(str);
		tam = strlen(str);
		i = 0;
		j = 0;
		while(i < tam) {
			if(str[i] >= 'a' && str[i] <= 'z') {
				str2[j] = str[i];
				j++;
				i++;
				while(str[i] != ' ') {
					i++;
				}
			} else {
				i++;
			}
		}
		str2[j] = '\0';
		printf("%s\n", str2);
	}
	
	return 0;
	
}
