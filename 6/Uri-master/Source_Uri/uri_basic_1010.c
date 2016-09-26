#include <stdio.h>

int main ()
{
	//Declarando variaveis 
	int codigo_peca_01 , codigo_peca_02 , quantidade_01 , quantidade_02 ;
	double preco_01 , preco_02 , valor_a_pagar;
	//Lendo variaveis do usuario
	scanf("%i	%i	%lf", &codigo_peca_01, &quantidade_01, &preco_01);
	scanf("%i	%i	%lf", &codigo_peca_02 ,&quantidade_02, &preco_02);
	//Calculando valor a pagar
	valor_a_pagar = (double) quantidade_01 * preco_01 + quantidade_02 * preco_02;
	//jogando resultado na tela 
	printf ("VALOR A PAGAR: R$ %.2lf\n",valor_a_pagar);
	
	return 0;
}
