#include <stdio.h>

int main()
{
	int tempo, vel, distancia;
	float litros;
	
	scanf("%d", &tempo);
	scanf("%d", &vel);
	
	distancia = vel*tempo;
	
	litros = distancia/12.0;
	
	printf("%.3f\n", litros);
	
}