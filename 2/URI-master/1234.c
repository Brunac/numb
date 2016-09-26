#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {

	char vet[55];
	int i;

	while(gets(vet)) {
		bool maiusculo = true;
		for(i = 0; i < strlen(vet); i++) {
			if((vet[i] >= 'a' && vet[i] <= 'z') || (vet[i] >= 'A' && vet[i] <= 'Z')) {
				if(maiusculo) {
					vet[i] = toupper(vet[i]);
				} else {
					vet[i] = tolower(vet[i]);
				}
				maiusculo = !maiusculo;
			}
		}
		printf("%s\n", vet);
	}

	return 0;

}

