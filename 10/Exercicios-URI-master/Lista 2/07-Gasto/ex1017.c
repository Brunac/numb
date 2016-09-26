#include <stdio.h>

int main(void){
	float x, y;
	double Saida;
	scanf("%f %f", &x, &y);
	Saida = (x*y)/12;
	printf("%.3f\n", Saida);
	return 0;
}
