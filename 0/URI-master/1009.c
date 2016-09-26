#include <stdio.h>

int main(){
	
	char nome[51];
	float salariofixo, salariofinal, vendas;
	
	scanf("%s",&nome);
	scanf("%f",&salariofixo);
	scanf("%f",&vendas);
	
	salariofinal = salariofixo + (vendas * 0.15);
	
	printf("TOTAL = R$ %.2f\n",salariofinal);
	
}
