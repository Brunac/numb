#include <stdio.h>


int main(void) {

	char nome;
	double salariof, vendas, salariob;
	scanf("%s", &nome);
	scanf("%lf", &salariof);
	scanf("%lf", &vendas);
	salariob = salariof + (vendas * 0.15); 
	printf("TOTAL = R$ %.2f\n", salariob);
	
	return 0;

}