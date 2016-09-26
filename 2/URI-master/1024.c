#include <stdio.h>
#include <string.h>

int main(void) {

	char M[1000], trs[1000];
	int N, i, j, count, metade, aux;
	scanf("%d", &N);
	getchar();

	for(i = 1; i <= N; i++) {
  		gets(M);
		count = strlen(M);
		for(j = 0; j < count; j++) {
    		if((M[j] >= 'A' && M[j] <= 'Z') || (M[j] >= 'a' && M[j] <= 'z')) {
    			M[j] += 3;
        	}
      	}
      	aux = 0;
		for(j = count - 1; j >= 0; j--) {
        	trs[aux] = M[j];
			aux++;
    	}
    	trs[aux] = '\0';
    	metade = count / 2;
    	for(j = metade; j < count; j++) {
        	trs[j]--;
      	}
      	printf("%s\n", trs);
   }

   return 0;

}
