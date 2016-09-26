#include <stdio.h>

int main(){
	
	int N, notas;

	scanf("%d",&N);
	
	if(N < 0 || N < 1000000){
		printf("%d\n",N);
	}else{
		return 0;
	}
	
	notas = N / 100;
	printf("%d nota(s) de R$ 100,00\n", notas);
	N = N - (notas*100);

	notas = N / 50;
	printf("%d nota(s) de R$ 50,00\n", notas);
	N = N - (notas*50);	

	notas = N / 20;
	printf("%d nota(s) de R$ 20,00\n", notas);
	N = N - (notas*20);	

	notas = N / 10;
	printf("%d nota(s) de R$ 10,00\n", notas);
	N = N - (notas*10);	

	notas = N / 5;
	printf("%d nota(s) de R$ 5,00\n", notas);
	N = N - (notas*5);

	notas = N / 2;
	printf("%d nota(s) de R$ 2,00\n", notas);
	N = N - (notas*2);

	notas = N / 1;
	printf("%d nota(s) de R$ 1,00\n", notas);
	N = N - (notas*1);
}
