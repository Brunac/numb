#include <stdio.h>

int main(void){
	int X;
	double Y, Saida;
	scanf("%d %lf", &X, &Y);
	Saida = X / Y;
	printf("%.3f km/l\n", Saida);
	return 0;
}
