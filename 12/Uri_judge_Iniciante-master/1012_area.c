#include <stdio.h>

int main () {

	double a, b, c, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
		scanf("%lf %lf %lf", & a, & b, & c);
		
		TRIANGULO = a * c / 2; 
		CIRCULO = (3.14159 * c *c); 
		TRAPEZIO = ((a + b) * c) / 2; 
		QUADRADO = b * b;
		RETANGULO = a * b;
	
	printf ("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);
	
	return 0;
}
//Accepted
