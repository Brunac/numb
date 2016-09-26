#include <stdio.h>
int main ()
{
	//Declarando variaveis 
	int num_do_funcio , horas_trabalhadas; 
	float valor_hora , salario;
	//Pegando valores do usuario
	scanf("%i",&num_do_funcio);
	scanf("%i",&horas_trabalhadas);
	scanf("%f",&valor_hora);
	//Calculando salario 
	salario = (float) horas_trabalhadas * valor_hora;
	//imprimindo na tela o resultado
	printf("NUMBER = %i\n",num_do_funcio);
	printf("SALARY = U$ %.2f\n",salario);
	return 0;
}
