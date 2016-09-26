#include <stdio.h>
#include <string.h>
int main ()
{
	//Declarando variaveis
	char nome[10];
	const int COMISSAO = 15;
	double salario_fixo , vendas_mes , total;
	//lendo variaveis 
	scanf("%s",&nome);
	scanf("%lf",&salario_fixo);
	scanf("%lf",&vendas_mes);
	//calculando total
	total = vendas_mes/100*COMISSAO + salario_fixo;
	printf("TOTAL = R$ %.2lf\n",total);
	
	return 0;
}
