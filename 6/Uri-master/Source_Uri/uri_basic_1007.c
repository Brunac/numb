#include <stdio.h>

int main ()
{
	//Declarando variaveis 
	int A , B , C , D , DIFERENCA;
	//Pegando valores do usuario
	scanf("%i",&A);
	scanf("%i",&B);
	scanf("%i",&C);
	scanf("%i",&D);
	//Calculando a diferenca do produto
	DIFERENCA = A * B - C * D;
	//Imprimindo resultado na tela 
	printf ("DIFERENCA = %i\n", DIFERENCA);
	return 0;
}
