#include <stdio.h>
#include <string.h>

int main(void) {

	char A[10000], B[10000];
	int N, i, j, k, tam1, tam2, aux, dif;
	scanf("%d", &N);

	while(N--) {
		scanf("%s", &A);
		scanf("%s", &B);
		tam1 = strlen(A);
		tam2 = strlen(B);
		if(tam2 > tam1) {
			printf("nao encaixa\n");
		} else if(tam1 >= tam2) {
			dif = tam1 - tam2;
			k = 0;
			aux = 0;
			for(j = dif; j < tam1; j++) {
				if(A[j] == B[k]) {
					aux++;
					k++;
				}
			}
			if(aux == tam2) {
				printf("encaixa\n");
			} else {
				printf("nao encaixa\n");
			}
		}
	}

	return 0;

}
