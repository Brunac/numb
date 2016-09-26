#include <stdio.h>

int main(){
	
	float N, moedas;
	int notas, nNotas;

	scanf("%f",&N);
	
	nNotas = N;
	printf("NOTAS:\n")
	
	notas = nNotas / 100;
	printf("%d nota(s) de R$ 100.00\n", notas);
	nNotas = nNotas - (notas*100);
		
	notas = nNotas / 50;
	printf("%d nota(s) de R$ 50.00\n", notas);
	nNotas = nNotas - (notas*50);	

	notas = nNotas / 20;
	printf("%d nota(s) de R$ 20.00\n", notas);
	nNotas = nNotas - (notas*20);	

	notas = nNotas / 10;
	printf("%d nota(s) de R$ 10.00\n", notas);
	nNotas = nNotas - (notas*10);	

	notas = nNotas / 5;
	printf("%d nota(s) de R$ 5.00\n", notas);
	nNotas = nNotas - (notas*5);

	notas = nNotas / 2;
	printf("%d nota(s) de R$ 2.00\n", notas);
	nNotas = nNotas - (notas*2);
	
}
