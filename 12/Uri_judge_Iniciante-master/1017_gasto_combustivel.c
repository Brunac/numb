#include <stdio.h>

int main () {

	int tempo, velocidade;
	float distancia;

		scanf("%d",& tempo); 
		scanf("%d",& velocidade);
			distancia = (tempo * velocidade) / 12.0;
		printf("%.3f\n", distancia);
	return 0;
}
