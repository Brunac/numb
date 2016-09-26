#include <stdio.h>
#include <math.h>
int main ()
{
	//declarando variaveis 
	const double PI = 3.14159;
	double Volume;
	int raio ;
	//Lendo valores 
	scanf("%i",&raio);
	
	//Calculando valor de Volume
	Volume = (4/3.0) * PI * pow(raio , 3.0);
	
	printf("VOLUME = %.3lf\n",Volume);
	
	return 0;
}
