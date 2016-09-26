#include <stdio.h>

int main ()
{
	//Declarando variaveis 
	int X;
	float Y , total;
	//pegando valores 
	scanf("%i",&X);
	scanf("%f",&Y);
	//Calculando distancia percorrida
	total = (float) X / Y;
	//Mostrando resultado na tela
	printf("%.3f km/l\n",total);
	
	return 0;
}
