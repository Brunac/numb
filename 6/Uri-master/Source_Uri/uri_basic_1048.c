#include <stdio.h>

void reajusteSalario(float porcentagem , float salario)
{
		printf("Novo salario: %.2f\n",salario+(salario*(porcentagem / 100)));
		printf("Reajuste ganho: %.2f\n",salario*(porcentagem / 100));
		printf("Em percentual: %i %\n",(int)porcentagem);	
}

int main(int argc, char const *argv[])
{
	float salario;

	scanf("%f",&salario);

	if(salario <= 400.0)
	{
		reajusteSalario(15.0,salario);	
	}
	else if (salario <= 800.0)
	{
		reajusteSalario(12.0,salario);
	}
	else if (salario <= 1200.0)
	{
		reajusteSalario(10.0,salario);
	}
	else if (salario <= 2000.0)
	{
		reajusteSalario(7.0,salario);
	}
	else if (salario > 2000.0)
	{
		reajusteSalario(4.0,salario);
	}
	return 0;
}

