#include <stdio.h>

int main(){
	
	int N, aux;

	scanf("%d",&N);
	
	aux = N / 365;
	printf("%d ano(s)\n", aux);
	N = N - (aux*365);

	aux = N / 30;
	printf("%d mes(es)\n", aux);
	N = N - (aux*30);	

	printf("%d dia(s)\n", N);	
}
