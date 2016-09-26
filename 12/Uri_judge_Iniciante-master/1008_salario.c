#include <stdio.h>

int main() {

	int numero_funcionario, horas_trabalhadas;
	float recebimento_por_hora, salario;
		scanf("%d",& numero_funcionario);
		scanf("%d",& horas_trabalhadas);
		scanf("%f",& recebimento_por_hora);
			salario = (horas_trabalhadas * recebimento_por_hora);
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero_funcionario, salario);
	return 0;

}
//Accepted
