#include <stdio.h>
#include <math.h>

int main ()
{
	//Declarando variaveis 
	const double PI = 3.14159;
	double A , B , C , area_triangulo , area_circulo , area_trapezio , 	area_quadrado , area_retangulo;
	//Pegando valores de A B C 
	scanf("%lf	%lf	%lf",&A,&B,&C);
		//Calculando o triangulo
		area_triangulo = A*C/2;
		//Calculando o circulo
		area_circulo = PI * pow(C , 2.0);
		//Calculando trapezio
		area_trapezio = C * (A + B)/ 2;
		//Calculando quadrado 
		area_quadrado = pow(B , 2.0);
		//Calculando retangulo 
		area_retangulo = A * B ;
	//Imprimindo resultados na tela 	
	printf("TRIANGULO: %.3lf\n",area_triangulo);
	printf("CIRCULO: %.3lf\n",area_circulo);
	printf("TRAPEZIO: %.3lf\n",area_trapezio);
	printf("QUADRADO: %.3lf\n",area_quadrado);
	printf("RETANGULO: %.3lf\n",area_retangulo);

	return 0;
}
