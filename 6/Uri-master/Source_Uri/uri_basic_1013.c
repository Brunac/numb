#include <stdio.h>
#include <math.h>
int main ()
{
	//Declarando variaveis 
	int a , b , c , maiorABC;
	//Pegando valores a b c do usuario
	scanf("%i %i %i",&a,&b,&c);
	//Calculando maior numero
	maiorABC = (a + b +abs(a - b)) / 2;
	maiorABC = (maiorABC < c) ? c : maiorABC ;
	//Mostrando resultados na tela 
	printf("%i eh o maior\n",maiorABC);
	return 0;
}
