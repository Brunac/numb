#include <stdio.h>

int main () {
	char nome;
	double salario_fixo, vendas_efetuadas, total_mes;
		scanf("%s", & nome);
		scanf("%lf", & salario_fixo);
		scanf("%lf", & vendas_efetuadas);
		total_mes = ((vendas_efetuadas * 0.15) + salario_fixo);
	printf ("TOTAL = R$ %.2lf\n", total_mes);
	return 0;

}
//Accepted
