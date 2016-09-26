#include <stdio.h>
#include <math.h>

int main(void){
	float x1, y1, x2, y2, p1, p2;
	double Saida;
	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
	p1 = x2 - x1;
	p2 = y2 - y1;
	Saida = sqrt(pow(p1, 2) + pow(p2, 2));
	printf("%.4f\n", Saida);
	return 0;
}
