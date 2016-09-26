#include <stdio.h>
#include <math.h>

int main ()
{
	//Declarando variaveis 
	float x1 , y1 , x2 , y2;
	float calculo;
	//pegando valores de x e y
	scanf("%f %f",&x1 ,&y1);
	scanf("%f %f",&x2 ,&y2);
	//Calculando resultado
	calculo = sqrtf(powf(x2 - x1,2.0)+powf(y2 - y1 ,2.0));
	//Imprimindo resultado
	printf("%.4f\n",calculo);
	return 0;
}
